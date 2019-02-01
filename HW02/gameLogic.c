#include "myLib.h"

// paddle
int paddleSize;
int paddleCol_Bottom;
int prevPaddleCol_Bottom;
int paddleRow_Bottom;
int paddleCol_Top;
int prevPaddleCol_Top;
int paddleRow_Top;
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
        // if the ball hits the top paddle
        if (collision(ballRow, ballCol, ballSize, ballSize, paddleRow_Top,
            paddleCol_Top, 1, paddleSize)) {
            ballRow += 1;
            ballRow_Velocity = -ballRow_Velocity;
        }
        // if the ball goes out of bounds to the right
        if (ballCol + ballSize >= 239) {
            ballCol -= ballCol + ballSize - 239;
            ballCol_Velocity = -ballCol_Velocity;
        }
        // if the ball hits the bottom paddle
        if (collision(ballRow, ballCol, ballSize, ballSize, paddleRow_Bottom,
            paddleCol_Bottom, 1, paddleSize)) {
            ballRow -= ballRow + ballSize - paddleRow_Bottom - 1;
            ballRow_Velocity = -ballRow_Velocity;
        }
    }
}

void updateBottomPaddlePosition() {

    int paddleSpeed = 1;
    prevPaddleCol_Bottom = paddleCol_Bottom;

    if (BUTTON_HELD(BUTTON_LEFT)) {
        paddleCol_Bottom -= paddleSpeed;
    }
    if (BUTTON_HELD(BUTTON_RIGHT)) {
        paddleCol_Bottom += paddleSpeed;
    }

    // if paddle tries to go out of bounds, don't let it
    if (paddleCol_Bottom <= 0){
        paddleCol_Bottom = 1;
    }
    if (paddleCol_Bottom + paddleSize >= 239) {
        paddleCol_Bottom = 239  - paddleSize;
    }
}

void updateTopPaddlePosition() {

    int paddleSpeed = 1;
    prevPaddleCol_Top = paddleCol_Top;

    if (BUTTON_HELD(BUTTON_B)) {
        paddleCol_Top -= paddleSpeed;
    }
    if (BUTTON_HELD(BUTTON_A)) {
        paddleCol_Top += paddleSpeed;
    }

    // if paddle tries to go out of bounds, don't let it
    if (paddleCol_Top <= 0){
        paddleCol_Top = 1;
    }
    if (paddleCol_Top + paddleSize >= 239) {
        paddleCol_Top = 239  - paddleSize;
    }
}

void reset() {

    // if the ball fall belows the paddle, reset
    if (ballRow > paddleRow_Bottom) {
        ballCol = SCREENWIDTH / 2;
        ballRow = SCREENHEIGHT / 2;
    }
    if (ballRow < paddleRow_Top - ballSize) {
        ballCol = SCREENWIDTH / 2;
        ballRow = SCREENHEIGHT / 2;
        ballRow_Velocity = -ballRow_Velocity;
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