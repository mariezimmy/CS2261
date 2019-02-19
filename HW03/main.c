#include "myLib.h"
#include "gameLogic.h"
#include <stdlib.h>

// prototypes
void initialize();

// state prototypes
void titleState();
void goToTitle();
void instructionsState();
void goToInstructions();
void gameState();
void goToGame();
void pauseState();
void goToPause();
void loseState();
void goToLose();

// states
enum {TITLE, INSTRUCTIONS, GAME, PAUSE, LOSE};
int state;

// random Seed
int seed;

// buttons
u16 buttons;
u16 oldButtons;

int main() {

	initialize();

	while(1) {

    // update button variables
    oldButtons = buttons;
    buttons = BUTTONS;

	    // state machine
	    switch (state) {
	        case TITLE:
	            titleState();
	            break;
	        case INSTRUCTIONS:
	        	instructionsState();
	        	break;
	        case GAME:
	            gameState();
	            break;
	        case PAUSE:
	            pauseState();
	            break;
	        case LOSE:
	            loseState();
	            break;
	        default:
	            break;
	    }
	}
}

// sets up the display and the game objects
void initialize() {

	REG_DISPCTL = MODE3 | BG2_ENABLE;

	// button initialization
	buttons = BUTTONS;
	oldButtons = 0;

	goToTitle();
}

void titleState() {

    if (BUTTON_PRESSED(BUTTON_START)) {
        goToInstructions();
    }
}

void goToTitle() {

    fillScreen(CYAN);
    state = TITLE;
}

void gameState() {

    updateGame();
    waitForVBlank();
    drawGame();

    // if no more balls, you've lost
    if (ballsRemaining == 0) {
        goToLose();
    }
    // press start to pause
    else if (BUTTON_PRESSED(BUTTON_START)) {
        goToPause();
    }
    // press select to go to instrustions
    else if (BUTTON_PRESSED(BUTTON_SELECT)) {
    	goToInstructions();
    }
}

void goToInstructions() {

	fillScreen(BLUE);
	state = INSTRUCTIONS;
}

void instructionsState() {

    seed++;
	// press start to go to game
	if (BUTTON_PRESSED(BUTTON_START)) {
        srand(seed);
        initGame();
        goToGame();
    }
	// press select to go title
	else if (BUTTON_PRESSED(BUTTON_SELECT)) {
		goToTitle();
	}
}

void goToGame() {

    fillScreen(BLACK);
    state = GAME;
}

void pauseState() {

	// press start to go back to game
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToGame();
    }
    // press select to go back to title
    else if (BUTTON_PRESSED(BUTTON_SELECT)) {
        goToTitle();
    }
}

void goToPause() {

    fillScreen(GRAY);
    drawRectangle(SCREENHEIGHT / 4, (SCREENWIDTH / 2) - 30, SCREENHEIGHT / 2, 20, WHITE);
    drawRectangle(SCREENHEIGHT / 4, (SCREENWIDTH / 2) + 10, SCREENHEIGHT / 2, 20, WHITE);
    state = PAUSE;
}

void loseState() {

	// press start to go to title
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToTitle();
    }
}

void goToLose() {

    fillScreen(RED);
    state = LOSE;
}
