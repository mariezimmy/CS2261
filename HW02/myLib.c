#include "myLib.h"

unsigned short *videoBuffer = (unsigned short *)0x6000000;

void setPixel(int row, int col, unsigned short color) {

	videoBuffer[OFFSET(row, col, SCREENWIDTH)] = color;
}

// this is for drawing the bricks and the ball
void drawRect(int row, int col, int height, int width, unsigned short color) {

	for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            setPixel(row + i, col + j, color);
        }
    }
}

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