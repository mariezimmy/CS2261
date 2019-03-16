#include <stdlib.h>
#include "gameLogic.h"
#include "gameStateImage.h"
#include "loseStateImage.h"
#include "myLib.h"
#include "pauseStateImage.h"
#include "spriteSheet.h"
#include "startStateImage.h"
#include "winStateImage.h"

// aliens
ANISPRITE aliens[ALIENCOUNT];
int aliensRemaining;
int bottomAlienRow;

// alien bullets
ANISPRITE alienBullets[ALIENBULLETCOUNT];

// bullets
ANISPRITE bullets[BULLETCOUNT];

// hearts
ANISPRITE hearts[HEARTCOUNT];
int heartsRemaining;

// player
ANISPRITE player;

// shadow OAM
OBJ_ATTR shadowOAM[128];

void initGame() {

    // load sprite sheet palette and tiles
    DMANow(3, spriteSheetPal, SPRITEPALETTE, 256);
    DMANow(3, spriteSheetTiles, &CHARBLOCK[4], 16384);
    aliensRemaining = ALIENCOUNT;
    heartsRemaining = HEARTCOUNT;
    bottomAlienRow = 0;
    initAliens();
    initPlayer();
    initHearts();
    initBullets();
    initAlienBullets();
}

void drawGame() {

    // draw player
    drawPlayer();

    // draw aliens
    for (int i = 0; i < ALIENCOUNT; i++) {
        drawAliens(&aliens[i]);
    }

    // draw hearts
    for (int j = 0; j < HEARTCOUNT; j++) {
        drawHearts(&hearts[j]);
    }

    // draw bullets
    for (int k = 0; k < BULLETCOUNT; k++) {
        drawBullets(&bullets[k]);
    }

    // draw alien bullets
    for (int l = 0; l < ALIENBULLETCOUNT; l++) {
        drawAlienBullets(&alienBullets[l]);
    }
}

void updateGame() {

    // update player
    updatePlayer(&player);

    // update aliens
    for (int i = 0; i < ALIENCOUNT; i++) {
        updateAliens(&aliens[i]);
    }

    // update bullets
    for (int k = 0; k < BULLETCOUNT; k++) {
        updateBullets(&bullets[k]);
    }

    // update alien bullets
    for (int l = 0; l < ALIENBULLETCOUNT; l++) {
        updateAlienBullets(&alienBullets[l]);
    }
}

void initAliens() {

    for (int i = 0; i < ALIENCOUNT; i++) {
        aliens[i].row = 20 + ((i / 6) * 16);
        aliens[i].col = 62 + (((i + 1) % 6) * 20);
        aliens[i].rdel = 2;
        aliens[i].cdel = 1;
        aliens[i].width = 16;
        aliens[i].height = 8;
        aliens[i].aniState = (i / 12);
        aliens[i].curFrame = 0;
        aliens[i].active = 1;
        aliens[i].numFrames = 2;
        aliens[i].index = i + 16;
    }

}

void initPlayer() {

    player.row = PLAYERROW;
    player.col = (SCREENWIDTH / 2) - 8;
    player.rdel = 0;
    player.cdel = 1;
    player.width = 16;
    player.height = 8;
    player.aniState = 0;
    player.curFrame = 3;
    player.active = 1;
    player.numFrames = 1;
}

void initHearts() {

    for (int i = 0; i < HEARTCOUNT; i++) {
        hearts[i].row = 2;
        hearts[i].col = SCREENWIDTH - (12 * (i + 1));
        hearts[i].width = 8;
        hearts[i].height = 8;
        hearts[i].aniState = 2;
        hearts[i].curFrame = 3;
        hearts[i].active = 1;
        hearts[i].numFrames = 1;
        hearts[i].index = i + 2;
    }
}

void initBullets() {

    for (int i = 0; i < BULLETCOUNT; i++) {
        bullets[i].height = 8;
        bullets[i].width = 1;
        bullets[i].row = -1 * bullets[i].height;
        bullets[i].rdel = -2;
        bullets[i].cdel = 0;
        bullets[i].aniState = 3;
        bullets[i].curFrame = 3;
        bullets[i].active = 0;
        bullets[i].numFrames = 1;
        bullets[i].index = i + 8;
    }
}

void initAlienBullets() {

    for (int i = 0; i < ALIENBULLETCOUNT; i++) {
        alienBullets[i].height = 8;
        alienBullets[i].width = 1;
        alienBullets[i].row = -1 * alienBullets[i].height;
        alienBullets[i].rdel = 2;
        alienBullets[i].cdel = 0;
        alienBullets[i].aniState = 3;
        alienBullets[i].curFrame = 3;
        alienBullets[i].active = 0;
        alienBullets[i].numFrames = 1;
        alienBullets[i].index = i + 64;
    }
}

void drawPlayer() {

    shadowOAM[0].attr0 = player.row | ATTR0_WIDE | ATTR0_4BPP;
    shadowOAM[0].attr1 = player.col | ATTR1_TINY;
    shadowOAM[0].attr2 = ATTR2_TILEID((player.curFrame), (player.aniState) * 2) | ATTR2_PALROW(0);

}

void drawAliens(ANISPRITE* a) {
    if (a->active) {
        shadowOAM[a->index].attr0 = a->row | ATTR0_WIDE | ATTR0_4BPP;
        shadowOAM[a->index].attr1 = a->col | ATTR1_TINY;
        shadowOAM[a->index].attr2 = ATTR2_TILEID((a->curFrame), (a->aniState) * 2) | ATTR2_PALROW(0);
    } else {
        shadowOAM[a->index].attr0 = ATTR0_HIDE;
    }
}

void drawHearts(ANISPRITE* h) {
    if (h->active) {
        shadowOAM[h->index].attr0 = h->row | ATTR0_SQUARE | ATTR0_4BPP;
        shadowOAM[h->index].attr1 = h->col | ATTR1_TINY;
        shadowOAM[h->index].attr2 = ATTR2_TILEID((h->curFrame), (h->aniState)) | ATTR2_PALROW(0);
    } else {
        shadowOAM[h->index].attr0 = ATTR0_HIDE;
    }
}

void drawBullets(ANISPRITE* b) {

    if (b->active) {
        shadowOAM[b->index].attr0 = b->row | ATTR0_SQUARE | ATTR0_4BPP;
        shadowOAM[b->index].attr1 = b->col | ATTR1_TINY;
        shadowOAM[b->index].attr2 = ATTR2_TILEID((b->curFrame), (b->aniState)) | ATTR2_PALROW(0);
    } else {
        shadowOAM[b->index].attr0 = ATTR0_HIDE;
    }
}

void drawAlienBullets(ANISPRITE* ab) {

    if (ab->active) {
        shadowOAM[64].attr0 = ab->row | ATTR0_SQUARE | ATTR0_4BPP;
        shadowOAM[64].attr1 = ab->col | ATTR1_TINY;
        shadowOAM[64].attr2 = ATTR2_TILEID((ab->curFrame), (ab->aniState)) | ATTR2_PALROW(0);
    } else {
        shadowOAM[64].attr0 = ATTR0_HIDE;
    }
}

void updatePlayer(ANISPRITE* p) {

    // move left
    if (BUTTON_HELD(BUTTON_LEFT)) {
        p->col -= p->cdel;
    }

    // move right
    if (BUTTON_HELD(BUTTON_RIGHT)) {
        p->col += p->cdel;
    }

    // ensure player doesn't go out of bounds
    if (p->col + p->width > SCREENWIDTH - 1) {
        p->col = 239 - p->width;
    }

    if (p->col < 0) {
        p->col = 0;
    }

    // fire bullet
    if (BUTTON_PRESSED(BUTTON_A)) {
        fireBullet();
    }

    // handle alien bullet-player collisions
    for (int i = 0; i < ALIENBULLETCOUNT; i++) {
        if (alienBullets[i].active) {
            if (collision(p->row, p->col, p->height, p->width,
                alienBullets[i].row, alienBullets[i].col, alienBullets[i].height, alienBullets[i].width)) {
                alienBullets[i].active = 0;
                heartsRemaining--;
                hearts[heartsRemaining].active = 0;
                break;
            }
        }
    }
}

void updateAliens(ANISPRITE* a) {

    if (a->active) {
        // move aliens to the right (or left) one
        a->col += a->cdel;

        // handle alien-wall collisions
        if (a->col <= 0 || a->col + a->width >= SCREENWIDTH) {
            a->col -= a->cdel;
            // all aliens change direction and move down
            for (int i = 0; i < ALIENCOUNT; i++) {
                aliens[i].cdel *= -1;
                aliens[i].row += aliens[i].rdel;
            }
            // update bottom alien row
            for (int k = ALIENCOUNT - 1; k >= 0; k--) {
                if (aliens[k].active) {
                    bottomAlienRow = aliens[k].row + a->height;
                    break;
                }
            }
        }

        // handle alien-bullet collisions
        for (int j = 0; j < BULLETCOUNT; j++) {
            if (bullets[j].active) {
                if (collision(a->row, a->col, a->height, a->width,
                    bullets[j].row, bullets[j].col, bullets[j].height, bullets[j].width)) {
                    a->active = 0;
                    aliensRemaining--;
                    bullets[j].active = 0;
                    break;
                }
            }
        }

        // animate aliens
        if (a->aniCounter % 20 == 0) {
            if (a->curFrame == 0) {
                a->curFrame = 1;
            } else {
                a->curFrame = 0;
            }
        }
        a->aniCounter++;

        // make aliens fire bullets randomly
        if (a->aniCounter % 320 == 0) {
            int randIndex = rand();
            if (aliens[randIndex % ALIENCOUNT].active) {
                fireAlienBullet(&aliens[randIndex % ALIENCOUNT]);
            }
        }
    }

}

void updateBullets(ANISPRITE* b) {

    if (b->active) {
        b->row += b->rdel;
        if ((b->row + b->height) == 0) {
            b->active = 0;
        }
    }
}

void updateAlienBullets(ANISPRITE* ab) {

    if (ab->active) {
        ab->row += ab->rdel;
        if (ab->row >= PLAYERROW) {
            ab->active = 0;
        }
    }
}

void fireBullet() {

    for (int i = 0; i < BULLETCOUNT; i++) {
        if (bullets[i].active == 0) {
            bullets[i].row = player.row;
            bullets[i].col = player.col;
            bullets[i].active = 1;
            break;
        }
    }
}

void fireAlienBullet(ANISPRITE* a) {

    // fire alien bullet from a given alien row and column
    for (int i = 0; i < ALIENBULLETCOUNT; i++) {
        if (alienBullets[i].active == 0) {
            alienBullets[i].row = a->row;
            alienBullets[i].col = a->col;
            alienBullets[i].active = 1;
            break;
        }
    }
}

int collision(int rowA, int colA, int heightA, int widthA,
    int rowB, int colB, int heightB, int widthB) {

    return
    rowA + heightA >= rowB
    && rowA <= rowB + heightB
    && colA + widthA >= colB
    && colA <= colB + widthB;
}