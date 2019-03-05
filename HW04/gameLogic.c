#include <stdlib.h>
#include "font.h"
#include "gameLogic.h"
#include "myLib.h"
#include "sun.h"
#include "tired.h"

// paddles
int paddleSize;
int paddleCol;
int prevPaddleCol;
int paddleRow;
int paddleSpeed;

// bricks
BRICK bricks[BRICKCOUNT];
int bricksRemaining;

// balls
BALL balls[BALLCOUNT];
int ballsRemaining;


void initGame() {

    bricksRemaining = BRICKCOUNT;
    ballsRemaining = BALLCOUNT;
    initBricks();
    initBalls();
    initPaddle();
}

void drawGame() {

    DMANow(3, sunPal, PALETTE, 256);
    fillScreen4(BLACK);

    // draw bricks
    for (int i = 0; i < BRICKCOUNT; i++) {
        drawBrick(&bricks[i]);
    }

    // draw balls
    for (int j = 0; j < BALLCOUNT; j++) {
        drawBall(&balls[j]);
    }

    // erase paddle
    drawHorizontalLine4(paddleRow, prevPaddleCol, paddleSize, BLACK);
    // draw paddle
    drawHorizontalLine4(paddleRow, paddleCol, paddleSize, CYAN);
}

void updateGame() {

    // update balls
    for (int i = 0; i < BALLCOUNT; i++) {
        updateBall(&balls[i]);
    }

    // update paddle
    updatePaddlePosition();
}

void initPaddle() {

    // paddle initialization
    paddleSize = SCREENWIDTH / 6;
    paddleCol = (SCREENWIDTH - paddleSize) / 2 + 10;
    prevPaddleCol = paddleCol;
    paddleRow = SCREENHEIGHT - 18;
    paddleSpeed = 4;
}

void initBricks() {

    // brick initialization
    int brickCol = 10;
    int brickRow = 5;
    for (int i = 0; i < BRICKCOUNT; i++) {
        if ((i != 0) && ((i) % 6 == 0)) {
            brickRow += 37;
            brickCol = 10;
        }
        bricks[i].height = 32;
        bricks[i].width = 32;
        bricks[i].active = 1;
        bricks[i].erased = 0;
        bricks[i].row = brickRow;
        bricks[i].col = brickCol + ((i % 6) * 38);
    }
}

void initBalls() {

    // ball initialization
    int ballCol = (SCREENWIDTH / 2) - 11;
    for (int i = 0; i < BALLCOUNT; i++) {
        balls[i].height = 4;
        balls[i].width = 4;
        balls[i].row = SCREENHEIGHT - 40;
        balls[i].col = ballCol + (10 * i);
        balls[i].oldRow = balls[i].row;
        balls[i].oldCol = balls[i].col;
        balls[i].rdel = 1;
        balls[i].cdel = 1;
        balls[i].colorIndex = 65 + i;
        balls[i].active = 1;
        balls[i].erased = 0;
    }
}

// handle every-frame actions of a ball
void updateBall(BALL* b) {

    if (b->active) {

        // bounce ball off of left and right walls
        if (b->col <= 0 || b->col + b->width - 1 >= SCREENWIDTH - 1)
            b->cdel *= -1;

        // bounce ball off of the ceiling
        if (b->row <= 0) {
            b->rdel *= -1;
        }

        // move the ball
        b->row += b->rdel;
        b->col += b->cdel;

        // handle ball-paddle collisions
        if (collision(paddleRow, paddleCol, 1, paddleSize,
            b->row, b->col, b->height, b->width)) {
            b->rdel *= -1;
        }

        // handle ball-brick collisions
        for (int i = 0; i < BRICKCOUNT; i++) {
            if (bricks[i].active &&
                collision(b->row, b->col, b->height, b->width,
                bricks[i].row, bricks[i].col, bricks[i].height, bricks[i].width)) {

                    bricks[i].active = 0;
                    bricksRemaining--;
                    b->rdel *= -1;
            }
        }

        // handle if ball falls below the paddle
        if (b->row > paddleRow) {
            b->active = 0;
            ballsRemaining--;
        }
    }
}

// draw a ball
void drawBall(BALL* b) {

    if (b->active) {
        drawSquare4(b->oldRow, b->oldCol, b->height, BLACK);
        drawSquare4(b->row, b->col, b->height, b->colorIndex);
    } else if (!b->erased) {
        drawSquare4(b->oldRow, b->oldCol, b->height, BLACK);
        b->erased = 1;
    }
    b->oldRow = b->row;
    b->oldCol = b->col;
}

// draw a brick
void drawBrick(BRICK* b) {


    if (b->active) {
        drawImage4(b->row, b->col, b->height, b->width, sunBitmap);
    } else if (!b->erased) {
        drawRectangle4(b->row, b->col, b->height, b->width, BLACK);
        b->erased = 1;
    }
}

void updatePaddlePosition() {

    int paddleSpeed = 2;
    prevPaddleCol = paddleCol;

    // move paddle left
    if (BUTTON_HELD(BUTTON_LEFT)) {
        paddleCol -= paddleSpeed;
    }
    // move paddle right
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


int collision(int rowA, int colA, int heightA, int widthA,
    int rowB, int colB, int heightB, int widthB) {

    return
    rowA + heightA >= rowB
    && rowA <= rowB + heightB
    && colA + widthA >= colB
    && colA <= colB + widthB;
}