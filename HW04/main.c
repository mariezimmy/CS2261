#include <stdlib.h>
#include "font.h"
#include "gameLogic.h"
#include "myLib.h"
#include "sun.h"
#include "tired.h"
#include "colors.h"

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

// text buffer
char buffer[41];

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

// sets up the mode4
void initialize() {

	REG_DISPCTL = MODE4 | BG2_ENABLE | DISP_BACKBUFFER;

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
        DMANow(3, colorsPal, PALETTE, 256);
        goToGame();
        initGame();
    }
}

void goToStart() {

    DMANow(3, tiredPal, PALETTE, 256);
    drawFullscreenImage4(tiredBitmap);
    waitForVBlank();
    flipPage();
    state = START;
}

void gameState() {
    updateGame();
    drawGame();
    waitForVBlank();
    flipPage();

    // if no more bricks, you've won
    if (bricksRemaining == 0) {
        goToWin();
    }

    else if (ballsRemaining == 0) {
        goToLose();
    }
    // press start to pause
    else if (BUTTON_PRESSED(BUTTON_START)) {
        goToPause();
    }
}

void goToGame() {

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

    DMANow(3, colorsPal, PALETTE, 256);
    fillScreen4(GRAY);
    drawRectangle4(SCREENHEIGHT / 4, (SCREENWIDTH / 2) - 30, SCREENHEIGHT / 2, 20, WHITE);
    drawRectangle4(SCREENHEIGHT / 4, (SCREENWIDTH / 2) + 10, SCREENHEIGHT / 2, 20, WHITE);
    drawString4(136, 12, "Return to title screen: press Select", WHITE);
    // drawString4(148, 39, "Return to game: press Start", WHITE);
    sprintf(buffer, "col brick 17: %d", bricks[17].col);
    drawString4(145, 5, buffer, WHITE);
    waitForVBlank();
    flipPage();
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

    DMANow(3, colorsPal, PALETTE, 256);
    fillScreen4(GREEN);
    drawString4(76, 96, "YOU WIN!", WHITE);
    drawString4(148, 14, "Return to title screen: press Start", WHITE);
    waitForVBlank();
    flipPage();
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

    DMANow(3, colorsPal, PALETTE, 256);
    fillScreen4(RED);
    drawString4(76, 96, "YOU LOSE", WHITE);
    drawString4(148, 14, "Return to title screen: press Start", WHITE);
    waitForVBlank();
    flipPage();
    state = LOSE;
}
