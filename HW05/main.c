#include <stdlib.h>
#include "font.h"
//#include "gameLogic.h"
#include "gameStateImage.h"
#include "loseStateImage.h"
#include "myLib.h"
#include "pauseStateImage.h"
#include "startStateImage.h"
#include "winStateImage.h"

// prototypes
void initialize();

// state prototypes
void startState();
void goToStart();
void gameState();
void goToGame();
void pauseState();
void goToPause();
void winState();
void goToWin();
void loseState();
void goToLose();

// states
enum {START, GAME, PAUSE, WIN, LOSE};
int state;

// random Seed
int seed;

// buttons
u16 buttons;
u16 oldButtons;

// vertical and horizontal background offset
int hOff;
int vOff;

// text buffer
char buffer[41];

// shadow OAM
OBJ_ATTR shadowOAM[128];

int main() {

    initialize();

    while(1) {

    // update button variables
    oldButtons = buttons;
    buttons = BUTTONS;

        // state machine
        switch (state) {
            case START:
                startState();
                break;
            case GAME:
                gameState();
                break;
            case PAUSE:
                pauseState();
                break;
            case WIN:
                winState();
                break;
            case LOSE:
                loseState();
                break;
            default:
                break;
        }
    }
}

void initialize() {

    // enable mode 0 and background 0
    REG_DISPCTL = MODE0 | BG0_ENABLE | SPRITE_ENABLE;

    // set up background 0 control register
    REG_BG0CNT = BG_SIZE_SMALL | BG_CHARBLOCK(0) | BG_SCREENBLOCK(28);

    // load start state palette
    DMANow(3, startStateImagePal, PALETTE, 256);

    // button initialization
    buttons = BUTTONS;
    oldButtons = 0;

    goToStart();
}

void startState() {
    seed++;

    waitForVBlank();

    if (BUTTON_PRESSED(BUTTON_START)) {
        srand(seed);
        goToGame();
        //initGame();
    }
}

void goToStart() {

    // load tiles into charblocks
    DMANow(3, startStateImageTiles, &CHARBLOCK[0], 1104);
    // load maps into screenblocks
    DMANow(3, startStateImageMap, &SCREENBLOCK[28], 1024);
    hideSprites();
    waitForVBlank();
    state = START;
}

void gameState() {
    // updateGame();
    // drawGame();
    // sprintf(buffer, "Suns remaining: %d", bricksRemaining);
    // drawString4(148, 0, buffer, WHITE);
    waitForVBlank();
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToWin();
    } else if (BUTTON_PRESSED(BUTTON_SELECT)) {
        goToLose();
    }

    // // if no more bricks, you've won
    // if (bricksRemaining == 0) {
    //     goToWin();
    // }

    // // if no more balls, you've lost
    // else if (ballsRemaining == 0) {
    //     goToLose();
    // }
    // // press start to pause
    // else if (BUTTON_PRESSED(BUTTON_START)) {
    //     goToPause();
    // }
}

void goToGame() {

    // load tiles into charblocks
    DMANow(3, gameStateImageTiles, &CHARBLOCK[0], 4464);
    // load maps into screenblocks
    DMANow(3, gameStateImageMap, &SCREENBLOCK[28], 1024);
    state = GAME;
}

void pauseState() {

    waitForVBlank();
    // press start to go back to game
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToGame();
    }
    // press select to go back to title
    else if (BUTTON_PRESSED(BUTTON_SELECT)) {
        goToStart();
    }
}

void goToPause() {

    // load tiles into charblocks
    DMANow(3, pauseStateImageTiles, &CHARBLOCK[0], 480);
    // load maps into screenblocks
    DMANow(3, pauseStateImageMap, &SCREENBLOCK[28], 1024);
    hideSprites();
    waitForVBlank();
    state = PAUSE;
}

void winState() {

    waitForVBlank();
    // press start to go to title
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToStart();
    }
}

void goToWin() {

    // load tiles into charblocks
    DMANow(3, winStateImageTiles, &CHARBLOCK[0], 2432);
    // load maps into screenblocks
    DMANow(3, winStateImageMap, &SCREENBLOCK[28], 1024);
    hideSprites();
    waitForVBlank();
    state = WIN;
}

void loseState() {

    waitForVBlank();
    // press start to go to title
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToStart();
    }
}

void goToLose() {

    // load tiles into charblocks
    DMANow(3, loseStateImageTiles, &CHARBLOCK[0], 1664);
    // load maps into screenblocks
    DMANow(3, loseStateImageMap, &SCREENBLOCK[28], 1024);
    hideSprites();
    waitForVBlank();
    state = LOSE;
}
