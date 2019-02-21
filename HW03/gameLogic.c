#include <stdlib.h>
#include "font.h"
#include "gameLogic.h"
#include "myLib.h"

// paddles
int paddleSize;
int paddleCol_Bottom;
int prevPaddleCol_Bottom;
int paddleRow_Bottom;
int paddleCol_Top;
int prevPaddleCol_Top;
int paddleRow_Top;
int paddleSpeed;

// balls
BALL balls[BALLCOUNT];
int ballsRemaining;

void initGame() {

    ballsRemaining = BALLCOUNT;
    initPaddles();
    initBalls();
}

void drawGame() {

    // draw balls
    for (int i = 0; i < BALLCOUNT; i++) {
        drawBall(&balls[i]);
    }
    // erase bottom paddle
    drawHorizontalLine(paddleRow_Bottom, prevPaddleCol_Bottom, paddleSize, BLACK);
    // draw bottom paddle
    drawHorizontalLine(paddleRow_Bottom, paddleCol_Bottom, paddleSize, CYAN);
    // erase top paddle
    drawHorizontalLine(paddleRow_Top, prevPaddleCol_Top, paddleSize, BLACK);
    // draw top paddle
    drawHorizontalLine(paddleRow_Top, paddleCol_Top, paddleSize, CYAN);
}

void updateGame() {

    // update balls
    for (int i = 0; i < BALLCOUNT; i++) {
        updateBall(&balls[i]);
    }

    // update paddles
    updateBottomPaddlePosition();
    updateTopPaddlePosition();
}

void initPaddles() {

    // paddle initialization
    paddleSize = SCREENWIDTH / 3;
    paddleCol_Bottom = (SCREENWIDTH - paddleSize) / 2;
    prevPaddleCol_Bottom = paddleCol_Bottom;
    paddleRow_Bottom = SCREENHEIGHT - 10;
    paddleCol_Top = (SCREENWIDTH - paddleSize) / 2;
    prevPaddleCol_Top = paddleCol_Top;
    paddleRow_Top = 10;
    paddleSpeed = 2;
}

void initBalls() {

    //ball initialization
    for (int i = 0; i < BALLCOUNT; i++) {
        balls[i].height = 5;
        balls[i].width = 5;
        balls[i].row = rand() % 110;
        balls[i].col = rand() % 130 + 10;
        balls[i].oldRow = balls[i].row;
        balls[i].oldCol = balls[i].col;
        balls[i].color = BLUE;
        balls[i].active = 1;
        balls[i].erased = 0;
        if (i % 2 == 0) {
            balls[i].rdel = 1;
            balls[i].cdel = 1;
        } else {
            balls[i].rdel = 1;
            balls[i].cdel = -1;
        }
    }
}

// handle every-frame actions of a ball
void updateBall(BALL* b) {

    if (b->active) {

        // bounce ball off of left and right walls
        if (b->col <= 0 || b->col + b->width - 1 >= SCREENWIDTH - 1)
            b->cdel *= -1;

        // move the ball
        b->row += b->rdel;
        b->col += b->cdel;

        // handle ball-paddle collisions
        if (collision(paddleRow_Top, paddleCol_Top, 1, paddleSize,
            b->row, b->col, b->height, b->width)
            || collision(paddleRow_Bottom, paddleCol_Bottom, 1, paddleSize,
            b->row, b->col, b->height, b->width)) {
            b->rdel *= -1;
        }

        // handle if ball falls the bottom paddle
        if (b->row > paddleRow_Bottom) {
            b->active = 0;
            ballsRemaining--;
        }

        // handle if ball goes above top paddle
        if (b->row < paddleRow_Top - b->height) {
            b->active = 0;
            ballsRemaining--;
        }

    }
}

// draw a ball
void drawBall(BALL* b) {

    if (b->active) {
        drawSquare(b->oldRow, b->oldCol, b->height, BLACK);
        drawSquare(b->row, b->col, b->height, b->color);
    } else if (!b->erased) {
        drawSquare(b->oldRow, b->oldCol, b->height, BLACK);
        b->erased = 1;
    }
    b->oldRow = b->row;
    b->oldCol = b->col;
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

int collision(int rowA, int colA, int heightA, int widthA,
    int rowB, int colB, int heightB, int widthB) {

    return
    rowA + heightA >= rowB
    && rowA <= rowB + heightB
    && colA + widthA >= colB
    && colA <= colB + widthB;
}