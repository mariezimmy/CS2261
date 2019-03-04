#ifndef MY_LIB_H
#define MY_LIB_H

// common typedefs
typedef unsigned short u16;
typedef unsigned char u8;

// common macros
#define OFFSET(r,c,rowlen) ((r)*(rowlen)+(c))

// ================================= DISPLAY ==================================

// display control register
#define REG_DISPCTL (*(u16 *)0x4000000)
#define MODE3 3
#define BG2_ENABLE (1<<10)

// display status registers
#define SCANLINECOUNTER (*(volatile u16 *)0x4000006)

// display Constants
#define SCREENHEIGHT 160
#define SCREENWIDTH 240

// video buffer
extern u16 *videoBuffer;

// color
#define COLOR(r,g,b) ((r) | (g)<<5 | (b)<<10)
#define BLACK 0
#define WHITE COLOR(31,31,31)
#define RED COLOR(31,0,0)
#define GREEN COLOR(0,31,0)
#define BLUE COLOR(0,0,31)
#define CYAN COLOR(0,31,31)
#define MAGENTA COLOR(31,0,31)
#define GRAY COLOR(15,15,15)
#define YELLOW COLOR(31,31,0)

// mode 4 drawing functions
void setPixel4(int row, int col, u8 colorIndex);
void drawSquare4(int row, int col, int size, volatile u8 colorIndex);
void drawRectangle4(int row, int col, int height, int width, volatile u8 colorIndex);
void drawHorizontalLine4(int row, int col, int length, u8 colorIndex);
void fillScreen4(volatile u8 colorIndex);
void drawImage4(int row, int col, int height, int width, const u16 *image);
void drawFullscreenImage4(const u16 *image);
void drawChar4(int row, int col, char ch, u8 colorIndex);
void drawString4(int row, int col, char *str, u8 colorIndex);

// mode 4 flip page
void flipPage();

// miscellaneous drawing functions
void waitForVBlank();

// ================================== INPUT ===================================

// button Register
#define BUTTONS (*(volatile u16 *)0x04000130)

// button Masks
#define BUTTON_A		(1<<0)
#define BUTTON_B		(1<<1)
#define BUTTON_SELECT	(1<<2)
#define BUTTON_START	(1<<3)
#define BUTTON_RIGHT	(1<<4)
#define BUTTON_LEFT		(1<<5)
#define BUTTON_UP		(1<<6)
#define BUTTON_DOWN		(1<<7)
#define BUTTON_R		(1<<8)
#define BUTTON_L		(1<<9)

// variables for button macros
extern u16 oldButtons;
extern u16 buttons;

// button macros
#define BUTTON_HELD(key) (~(BUTTONS) & (key))
#define BUTTON_PRESSED(key) ((!(~(oldButtons) & (key))) && (~(buttons) & (key)))

// =================================== DMA ====================================

// DMA struct
typedef volatile struct {
    volatile const void *src;
    volatile void *dst;
    unsigned int cnt;
} DMA;

// first DMA register address
extern DMA *dma;

// destination adjustment
#define DMA_DESTINATION_INCREMENT (0 << 21)
#define DMA_DESTINATION_DECREMENT (1 << 21)
#define DMA_DESTINATION_FIXED (2 << 21)
#define DMA_DESTINATION_RESET (3 << 21)

// source adjustment
#define DMA_SOURCE_INCREMENT (0 << 23)
#define DMA_SOURCE_DECREMENT (1 << 23)
#define DMA_SOURCE_FIXED (2 << 23)

// VBlank and HBlank repeats
#define DMA_REPEAT (1 << 25)

// chunk size
#define DMA_16 (0 << 26)
#define DMA_32 (1 << 26)

// timing mode
#define DMA_NOW (0 << 28)
#define DMA_AT_VBLANK (1 << 28)
#define DMA_AT_HBLANK (2 << 28)
#define DMA_AT_REFRESH (3 << 28)

// interrupts
#define DMA_IRQ (1 << 30)

// begin DMA
#define DMA_ON (1 << 31)

// DMA functions
void DMANow(int channel, volatile const void *src, volatile void *dst, unsigned int cnt);


#endif