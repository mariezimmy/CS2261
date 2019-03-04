#include <stdlib.h>
#include "font.h"
#include "gameLogic.h"
#include "myLib.h"

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
void winState();
void goToWin();
void loseState();
void goToLose();

// states
enum {TITLE, INSTRUCTIONS, GAME, PAUSE, WIN, LOSE};
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
	        case WIN:
	            winState();
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

    drawString4(148, 84, "Press Start!", WHITE);
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToInstructions();
    }
}

void goToTitle() {

    fillScreen4(BLUE);
    drawString4(76, 60, "PONG: 5-ball Edition", WHITE);
    state = TITLE;
}

void gameState() {

    updateGame();
    waitForVBlank();
    drawGame();

    // if no more bricks, you've won
    if (bricksRemaining == 0) {
        goToWin();
    }

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

	fillScreen4(BLUE);
    drawString4(6, 84, "INSTRUCTIONS", WHITE);
    drawString4(20, 2, "The motive is to keep the balls up. You", WHITE);
    drawString4(32, 2, "lose a ball if it goes below the bottom", WHITE);
    drawString4(44, 2, "paddle or above the top paddle.", WHITE);

    drawString4(60, 2, "Bottom paddle right: right arrow", WHITE);
    drawString4(72, 2, "Bottom paddle left: left arrow", WHITE);
    drawString4(84, 2, "Top paddle right: A (X on emulator)", WHITE);
    drawString4(96, 2, "Top paddle left: B (Z on emulator)", WHITE);
    drawString4(108, 2, "Pause: press Start", WHITE);
    drawString4(120, 2, "View instrustions again: press Select", WHITE);

    drawString(148, 60, "Press Start to play!", WHITE);
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

    fillScreen4(BLACK);
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

    fillScreen4(GRAY);
    drawRectangle4(SCREENHEIGHT / 4, (SCREENWIDTH / 2) - 30, SCREENHEIGHT / 2, 20, WHITE);
    drawRectangle4(SCREENHEIGHT / 4, (SCREENWIDTH / 2) + 10, SCREENHEIGHT / 2, 20, WHITE);
    drawString4(136, 12, "Return to title screen: press Select", WHITE);
    drawString4(148, 39, "Return to game: press Start", WHITE);
    state = PAUSE;
}

void winState() {

	// press start to go to title
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToTitle();
    }
}

void goToWin() {

    fillScreen4(GREEN);
    drawString4(76, 96, "YOU WIN!", WHITE);
    drawString4(148, 14, "Return to title screen: press Start", WHITE);
    state = WIN;
}

void loseState() {

    // press start to go to title
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToTitle();
    }
}

void goToLose() {

    fillScreen4(RED);
    drawString4(76, 96, "YOU LOSE", WHITE);
    drawString4(148, 14, "Return to title screen: press Start", WHITE);
    state = LOSE;
}
