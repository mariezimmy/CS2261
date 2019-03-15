#include <stdlib.h>
#include "gameLogic.h"
#include "gameStateImage.h"
#include "loseStateImage.h"
#include "myLib.h"
#include "pauseStateImage.h"
#include "spriteSheet.h"
#include "startStateImage.h"
#include "winStateImage.h"

unsigned short *videoBuffer = (u16 *)0x6000000;

// the start of DMA registers
DMA *dma = (DMA *)0x40000B0;

void setPixel4(int row, int col, u8 colorIndex) {

	unsigned short pixelData = videoBuffer[OFFSET(row, col, SCREENWIDTH) / 2];
    if (col & 1) {
        pixelData &= 0x00FF;
        pixelData |= (colorIndex << 8);
    } else {
        pixelData &= 0xFF00;
        pixelData |= colorIndex;
    }
    videoBuffer[OFFSET(row, col, SCREENWIDTH) / 2] = pixelData;
}

void drawSquare4(int row, int col, int size, volatile u8 colorIndex) {

    drawRectangle4(row, col, size, size, colorIndex);
}

void drawRectangle4(int row, int col, int height, int width, volatile u8 colorIndex) {

    volatile unsigned short pixelData = colorIndex | (colorIndex << 8);
    for (int i = 0; i < height; i++) {
        // if even column and even width
        if ((!(col & 1)) && (!(width & 1))) {
            DMANow(3, &pixelData,
                &videoBuffer[OFFSET(row + i, col, SCREENWIDTH) / 2],
                DMA_SOURCE_FIXED | (width / 2));
        }
        // if even column and odd width
        else if ((!(col & 1)) && (width & 1)) {
            // DMA if number of transfers will not be zero
            if (!(width - 1 <= 0)) {
                DMANow(3, &pixelData,
                    &videoBuffer[OFFSET(row + i, col, SCREENWIDTH) / 2],
                    DMA_SOURCE_FIXED | ((width - 1) / 2));
            }
            setPixel4(row + i, col + width - 1, colorIndex);
        }
        // if odd column and odd width
        else if ((col & 1) && (width & 1)) {
            // DMA if number of transfers will not be zero
            if (!(width - 1 <= 0)) {
                DMANow(3, &pixelData,
                    &videoBuffer[OFFSET(row + i, col + 1, SCREENWIDTH) / 2],
                    DMA_SOURCE_FIXED | ((width - 1) / 2));
            }
            setPixel4(row + i, col, colorIndex);
        }
        // if odd column and even width
        else if ((col & 1) && (!(width & 1))) {
            // DMA if number of transfers will not be zero
            if (!(width - 2 <= 0)) {
                DMANow(3, &pixelData,
                    &videoBuffer[OFFSET(row + i, col + 1, SCREENWIDTH) / 2],
                    DMA_SOURCE_FIXED | ((width - 2) / 2));
            }
            setPixel4(row + i, col + width - 1, colorIndex);
            setPixel4(row + i, col, colorIndex);
        }
    }
}

void drawHorizontalLine4(int row, int col, int length, u8 colorIndex) {

    for (int i = 0; i < length; i++) {
        setPixel4(row, col + i, colorIndex);
    }
}

// fill screen in mode 4
void fillScreen4(volatile u8 colorIndex) {

    volatile u16 pixelData = colorIndex | (colorIndex << 8);
    DMANow(3, &pixelData, videoBuffer, DMA_SOURCE_FIXED | (SCREENWIDTH * SCREENHEIGHT) / 2);
}

// draw an image (with even col and even width) in mode 4
void drawImage4(int row, int col, int height, int width, const u16 *image) {

    for (int i = 0; i < height; i++) {
        DMANow(3, &image[OFFSET(i, 0, width / 2)],
            &videoBuffer[OFFSET(row + i, col, SCREENWIDTH) / 2],
            width / 2);
    }
}

// fill the entire screen with an image in mode 4
void drawFullscreenImage4(const u16 *image) {

    DMANow(3, image, videoBuffer, SCREENWIDTH * SCREENHEIGHT / 2);
}

// set up and begin a DMA transfer
void DMANow(int channel, volatile const void *src, volatile void *dst, unsigned int cnt) {

    dma[channel].cnt = 0;
    dma[channel].src = src;
    dma[channel].dst = dst;
    dma[channel].cnt = cnt | DMA_ON;

}

void hideSprites() {
    for (int i = 0; i < 128; i++) {
        shadowOAM[i].attr0 = ATTR0_HIDE;
    }
}

void waitForVBlank() {

	while(SCANLINECOUNTER > 160);
	while(SCANLINECOUNTER < 160);
}

// flips display registers for mode 4
void flipPage() {

    if (REG_DISPCTL & DISP_BACKBUFFER) {
        videoBuffer = BACKBUFFER;
    } else {
        videoBuffer = FRONTBUFFER;
    }
    REG_DISPCTL ^= DISP_BACKBUFFER;
}