#include <stdlib.h>
#include "font.h"
#include "gameLogic.h"
#include "myLib.h"

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
    initBricks();
    initBalls();
}

void drawGame() {

    // draw bricks
    for (int i = 0; i < BRICKCOUNT; i++) {
        drawBrick(&bricks[i]);
    }

    // draw balls
    for (int j = 0; j < BALLCOUNT; j++) {
        drawBall(&balls[i]);
    }

    // erase paddle
    drawHorizontalLine(paddleRow, prevPaddleCol, paddleSize, BLACK);
    // draw paddle
    drawHorizontalLine(paddleRow, paddleCol, paddleSize, CYAN);
}

void updateGame() {

    // update balls
    for (int i = 0; i < BALLCOUNT; i++) {
        updateBall(&balls[i]);
    }

    // update paddle
    updatePaddlePosition();
}

void initPaddles() {

    // paddle initialization
    paddleSize = SCREENWIDTH / 3;
    paddleCol = (SCREENWIDTH - paddleSize) / 2;
    prevPaddleCol = paddleCol;
    paddleRow = SCREENHEIGHT - 10;
    paddleSpeed = 2;
}

void initBricks() {

    //brick initialization
    for (int i = 0; i < BRICKCOUNT; i++) {
        bricks[i].height = 5;
        bricks[i].width = 5;
        bricks[i].row = rand() % 110;
        bricks[i].col = rand() % 130 + 10;
        bricks[i].color = BLUE;
        bricks[i].active = 1;
        bricks[i].erased = 0;
    }
}

void initBalls() {

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

        // handle if ball falls below the  paddle
        if (b->row > paddleRow_Bottom) {
            b->active = 0;
            ballsRemaining--;
        }
    }
}

// draw a ball
void drawBall(BALL* b) {

    if (b->active) {
        drawSquare(4b->oldRow, b->oldCol, b->height, BLACK);
        drawSquare4(b->row, b->col, b->height, b->color);
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
        drawRectangle4(b->row, b->col, b->height, b->width, b->color);
    } else if (!b->erased) {
        drawRectangle4(b->row, b->col, b->height, b->width, BLACK);
        b->erased = 1;
    }
}

void updatePaddlePosition() {

    int paddleSpeed = 2;
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


int collision(int rowA, int colA, int heightA, int widthA,
    int rowB, int colB, int heightB, int widthB) {

    return
    rowA + heightA >= rowB
    && rowA <= rowB + heightB
    && colA + widthA >= colB
    && colA <= colB + widthB;
}