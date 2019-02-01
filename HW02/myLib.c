#include "myLib.h"

unsigned short *videoBuffer = (u16 *)0x6000000;

void setPixel(int row, int col, u16 color) {

	videoBuffer[OFFSET(row, col, SCREENWIDTH)] = color;
}

// this is for drawing the ball
void drawSquare(int row, int col, int size, u16 color) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            setPixel(row + i, col + j, color);
        }
    }
}

// this is for drawing the paddle
void drawHorizontalLine(int row, int col, int length, u16 color) {
    for (int i = 0; i < length; i++) {
        setPixel(row, col + i, color);
    }
}

void waitForVBlank() {

	while(SCANLINECOUNTER > 160);
	while(SCANLINECOUNTER < 160);
}