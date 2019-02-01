#include "myLib.h"

// prototypes
void initialize();
void draw();

// buttons
u16 buttons;
u16 oldButtons;

// paddle
extern int paddleSize;
extern int paddleCol_Bottom;
extern int prevPaddleCol_Bottom;
extern int paddleRow_Bottom;
extern int paddleCol_Top;
extern int prevPaddleCol_Top;
extern int paddleRow_Top;
extern int paddleSpeed;

// ball
extern int ballSize;
extern int ballCol;
extern int ballRow;
extern int ballCol_Velocity;
extern int ballRow_Velocity;
extern int prevBallCol;
extern int prevBallRow;

// other variables
extern int time = 0;

int main() {

	initialize();

	while(1) {
		oldButtons = buttons;
		buttons = BUTTONS;

		updateBallPosition(time);
		updateTopPaddlePosition();
		updateBottomPaddlePosition();
		reset();
		waitForVBlank();
		draw();
		time++;

	}
}

// sets up the display and the game objects
void initialize() {

	REG_DISPCTL = MODE3 | BG2_ENABLE;

	// button initialization
	buttons = BUTTONS;
	oldButtons = 0;

	// paddle initialization
	paddleSize = SCREENWIDTH / 4;
	paddleCol_Bottom = (SCREENWIDTH - paddleSize) / 2;
	prevPaddleCol_Bottom = paddleCol_Bottom;
	paddleRow_Bottom = SCREENHEIGHT - 10;
	paddleCol_Top = (SCREENWIDTH - paddleSize) / 2;
	prevPaddleCol_Top = paddleCol_Top;
	paddleRow_Top = 10;
	paddleSpeed = 1;

	// ball initialization
	ballSize = 5;
	ballCol = SCREENWIDTH / 2;
	ballRow = SCREENHEIGHT / 2;
	ballCol_Velocity = 1;
	ballRow_Velocity = 2;
}

// performs all of the writing to the screen
void draw() {

	// erase ball
	drawSquare(prevBallRow, prevBallCol, ballSize, BLACK);
	// draw ball
	drawSquare(ballRow, ballCol, ballSize, MAGENTA);
	// erase bottom paddle
	drawHorizontalLine(paddleRow_Bottom, prevPaddleCol_Bottom, paddleSize, BLACK);
	// draw bottom paddle
	drawHorizontalLine(paddleRow_Bottom, paddleCol_Bottom, paddleSize, CYAN);
	// erase top paddle
	drawHorizontalLine(paddleRow_Top, prevPaddleCol_Top, paddleSize, BLACK);
	// draw top paddle
	drawHorizontalLine(paddleRow_Top, paddleCol_Top, paddleSize, CYAN);
}
