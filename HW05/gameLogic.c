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

    // update hearts
    for (int j = 0; j < HEARTCOUNT; j++) {
        updateHearts(&hearts[j]);
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
        aliens[i].col = 62 + ((i % 6) * 20);
        aliens[i].rdel = 1;
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

    // reference lab 04 for bullet code
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
    // reference lab 04 for bullet code
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

    // fire bullet
    if (BUTTON_PRESSED(BUTTON_A)) {
        fireBullet();
    }
}

void updateAliens(ANISPRITE* a) {

}

void updateHearts(ANISPRITE* h) {

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
    // reference lab 04 for bullet code
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
    // reference lab 04 for bullet code
    // not the input is deciding which alien will fire the bullet
}

int collision(int rowA, int colA, int heightA, int widthA,
    int rowB, int colB, int heightB, int widthB) {

    return
    rowA + heightA >= rowB
    && rowA <= rowB + heightB
    && colA + widthA >= colB
    && colA <= colB + widthB;
}