#include "myLib.h"

// prototypes
void initialize();
void draw();

// buttons
u16 buttons;
u16 oldButtons;

// paddle
extern int paddleSize;
extern int paddleCol;
extern int prevPaddleCol;
extern int paddleRow;
extern int paddleSpeed;

// bricks
int brickRow;
int brickCol;
int brickHeight;
int brickWidth;

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
	drawBricks(2, 1, 12, 10, 5, CYAN);

	while(1) {
		oldButtons = buttons;
		buttons = BUTTONS;

		updateBallPosition(time);
		updatePaddlePosition();
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
	paddleCol = (SCREENWIDTH - paddleSize) / 2;
	prevPaddleCol = paddleCol;
	paddleRow = SCREENHEIGHT - 10;
	paddleSpeed = 1;

	// brick initialization
	brickRow;
	brickCol;
	brickHeight;
	brickWidth;

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
	// erase paddle
	drawHorizontalLine(paddleRow, prevPaddleCol, paddleSize, BLACK);
	// draw paddle
	drawHorizontalLine(paddleRow, paddleCol, paddleSize, CYAN);
}
