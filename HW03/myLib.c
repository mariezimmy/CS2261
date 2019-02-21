#include <stdlib.h>
#include "font.h"
#include "gameLogic.h"
#include "myLib.h"

unsigned short *videoBuffer = (u16 *)0x6000000;

// the start of DMA registers
DMA *dma = (DMA *)0x40000B0;

void setPixel(int row, int col, u16 color) {

	videoBuffer[OFFSET(row, col, SCREENWIDTH)] = color;
}

// this is for drawing the ball
void drawSquare(int row, int col, int size, u16 color) {

    volatile unsigned short c = color;
    for (int i = 0; i < size; i++) {
        DMANow(3, &c, &videoBuffer[OFFSET(row + i, col, SCREENWIDTH)], size | DMA_SOURCE_FIXED);
    }
}

// this is for drawing the pause symbol
void drawRectangle(int row, int col, int height, int width, u16 color) {

    volatile unsigned short c = color;
    for (int i = 0; i < height; i++) {
        DMANow(3, &c, &videoBuffer[OFFSET(row + i, col, SCREENWIDTH)], width | DMA_SOURCE_FIXED);
    }
}

// this is for drawing the paddle
void drawHorizontalLine(int row, int col, int length, u16 color) {

    for (int i = 0; i < length; i++) {
        setPixel(row, col + i, color);
    }
}

// helper function to draw string
void drawChar(int row, int col, char ch, u16 color) {

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 6; j++) {
            if (fontdata_6x8[48 * ch + j + 6 * i]) {
                setPixel(row + i, col + j, color);
            }
        }
    }
}

// this is for drawing strings in instruction and title states
// remember to input charBuffer[41] = "someString";
// so that way, we do not draw a string past the row length
void drawString(int row, int col, char *str, u16 color) {

    int i = 0;
    while (str[i] != '\0') {
        drawChar(row, col, str[i], color);
        i++;
        col += 6;
    }
}

void fillScreen(u16 color) {

    volatile unsigned short c = color;
    DMANow(3, &c, videoBuffer, 38400 | DMA_SOURCE_FIXED);
}

// set up and begin a DMA transfer
void DMANow(int channel, volatile const void *src, volatile void *dst, unsigned int cnt) {

    dma[channel].cnt = 0;
    dma[channel].src = src;
    dma[channel].dst = dst;
    dma[channel].cnt = cnt | DMA_ON;

}

void waitForVBlank() {

	while(SCANLINECOUNTER > 160);
	while(SCANLINECOUNTER < 160);
}