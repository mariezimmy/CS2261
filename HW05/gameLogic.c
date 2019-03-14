#include <stdlib.h>
#include "gameLogic.h"
#include "gameStateImage.h"
#include "loseStateImage.h"
#include "myLib.h"
#include "pauseStateImage.h"
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

// shadow OAM
OBJ_ATTR shadowOAM[128];

void initGame() {

    // load sprite sheet palette and tiles

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
    drawPlayer();

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

}

void initPlayer() {

}

void initHearts() {

}

void initBullets() {

    // reference lab 04 for bullet code

}

void initAlienBullets() {

    // reference lab 04 for bullet code
}

void drawPlayer() {

}

void drawAliens(ANISPRITE* a) {

}

void drawHearts(ANISPRITE* h) {

}

void drawBullets(ANISPRITE* b) {
    // reference lab 04 for bullet code
}

void drawAlienBullets(ANISPRITE* ab) {
    // reference lab 04 for bullet code
}

void updatePlayer() {

}

void updateAliens(ANISPRITE* a) {

}

void updateHearts(ANISPRITE* h) {

}

void updateBullets(ANISPRITE* b) {
    // reference lab 04 for bullet code
}

void updateAlienBullets(ANISPRITE* ab) {
    // reference lab 04 for bullet code
}

void fireBullet() {
    // reference lab 04 for bullet code
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