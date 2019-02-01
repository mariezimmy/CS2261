#include "myLib.h"

// paddle
int paddleSize;
int paddleCol;
int prevPaddleCol;
int paddleRow;
int paddleSpeed;

// bricks
int brickRow;
int brickCol;
int brickHeight;
int brickWidth;

// ball
int ballSize;
int ballCol;
int ballRow;
int ballCol_Velocity;
int ballRow_Velocity;
int prevBallCol;
int prevBallRow;

void updateBallPosition(int time) {

    prevBallCol = ballCol;
    prevBallRow = ballRow;

    // let's slow down the ball just a wee bit
    int timestep = 3;
    if (time % timestep == 0 && time != 0) {
        ballCol += ballCol_Velocity;
        ballRow += ballRow_Velocity;

        // if the ball goes out of bound to the left
        if (ballCol <= 0){
            ballCol =  ballCol + 1;
            ballCol_Velocity = -ballCol_Velocity;
        }
        // if the ball goes out of bounds at the top
        if (ballRow <= 0) {
            ballRow = ballRow + 1;
            ballRow_Velocity = -ballRow_Velocity;
        }
        // if the ball goes out of bounds to the right
        if (ballCol + ballSize >= 239) {
            ballCol -= ballCol + ballSize - 239;
            ballCol_Velocity = -ballCol_Velocity;
        }
        // if the ball goes out of bounds at the bottom
        if ((ballRow + ballSize >= paddleRow) &&
            (ballCol + ballSize >= paddleCol) &&
            (ballCol < paddleCol + paddleSize)) {
            ballRow -= ballRow + ballSize - paddleRow - 1;
            ballRow_Velocity = -ballRow_Velocity;
        }
    }
}

void updatePaddlePosition() {
    int paddleSpeed = 1;
    prevPaddleCol = paddleCol;

    if (BUTTON_HELD(BUTTON_LEFT)) {
        paddleCol -= paddleSpeed;
    }
    if (BUTTON_HELD(BUTTON_RIGHT)) {
        paddleCol += paddleSpeed;
    }

    // if paddle tries to go out of bounds, don't let it
    if (paddleCol <= 0){
        paddleCol = 1;
    }
    if (paddleCol + paddleSize >= 239) {
        paddleCol = 239  - paddleSize;
    }
}

void drawBricks(int startRow, int startCol, int bricksPerRow, int brickRows,
    int brickHeight, u16 color) {
    int row = startRow;
    int col = startCol;
    int brickWidth = (SCREENWIDTH / bricksPerRow) - 2;
    for (int i = 0; i < brickRows; i++) {
        for (int j = 0; j < bricksPerRow; j++) {
            drawRect(row, col, brickHeight, brickWidth, color);
            col += brickWidth + 2;
        }
        col = 1;
        row += brickHeight + 2;
    }
}

void reset() {
    // if the ball fall belows the paddle, reset
    if (ballRow > paddleRow) {
        ballCol = SCREENWIDTH / 2;
        ballRow = SCREENHEIGHT / 2;
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