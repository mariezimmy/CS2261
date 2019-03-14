#ifndef MY_LIB_H
#define MY_LIB_H

// common typedefs
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

// common macros
#define OFFSET(r, c, rowlen) ((r) * (rowlen) + (c))

// ================================= DISPLAY ==================================

// display control register
#define REG_DISPCTL (*(u16 *)0x4000000)
#define MODE0 0
#define MODE3 3
#define MODE4 4
#define DISP_BACKBUFFER (1<<4)
#define SPRITE_ENABLE   (1<<12)
#define SPRITE_MODE_2D  (0<<6)
#define SPRITE_MODE_1D  (1<<6)

// backgrounds
#define BG0_ENABLE (1<<8)
#define BG1_ENABLE (1<<9)
#define BG2_ENABLE (1<<10)
#define BG3_ENABLE (1<<11)

// background control registers
#define REG_BG0CNT (*(volatile unsigned short*)0x4000008)
#define REG_BG1CNT (*(volatile unsigned short*)0x400000A)
#define REG_BG2CNT (*(volatile unsigned short*)0x400000C)
#define REG_BG3CNT (*(volatile unsigned short*)0x400000E)

#define BG_CHARBLOCK(num)   ((num)<<2)
#define BG_SCREENBLOCK(num) ((num)<<8)
#define BG_8BPP             (1<<7)
#define BG_SIZE_SMALL       (0<<14)  // 32x32 tiles
#define BG_SIZE_WIDE        (1<<14)  // 64x32 tiles
#define BG_SIZE_TALL        (2<<14)  // 32x64 tiles
#define BG_SIZE_LARGE       (3<<14)  // 64x64 tiles

// background offset registers
#define REG_BG0HOFF (*(volatile unsigned short *)0x04000010)
#define REG_BG0VOFF (*(volatile unsigned short *)0x04000012)

#define REG_BG1HOFF (*(volatile unsigned short *)0x04000014)
#define REG_BG1VOFF (*(volatile unsigned short *)0x04000016)

#define REG_BG2HOFF (*(volatile unsigned short *)0x04000018)
#define REG_BG2VOFF (*(volatile unsigned short *)0x0400001A)

#define REG_BG3HOFF (*(volatile unsigned short *)0x0400001C)
#define REG_BG3VOFF (*(volatile unsigned short *)0x0400001E)

// tilemap entry flags
#define FLIP_TILE_HORIZONTAL (1 << 10)
#define FLIP_TILE_VERTICAL (1 << 11)

// character and screen blocks
typedef struct {
    u16 tileimg[8192];
} charblock;
#define CHARBLOCK ((charblock *)0x6000000)

typedef struct {
    u16 tilemap[1024];
} screenblock;
#define SCREENBLOCK ((screenblock *)0x6000000)

// display status registers
#define SCANLINECOUNTER (*(volatile u16 *)0x4000006)

// display Constants
#define SCREENHEIGHT 160
#define SCREENWIDTH 240

// video buffer
extern u16 *videoBuffer;
#define FRONTBUFFER ((u16 *)0x6000000)
#define BACKBUFFER ((u16 *)0x600A000)

// palettes
#define PALETTE ((unsigned short *)0x5000000)
#define SPRITEPALETTE ((unsigned short *)0x5000200)

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

// ================================= SPRITES ==================================

// sprite attribute struct
typedef struct {
    unsigned short attr0;
    unsigned short attr1;
    unsigned short attr2;
    unsigned short fill;
} OBJ_ATTR;

// object attribute memory
#define OAM ((OBJ_ATTR*)(0x7000000))
extern OBJ_ATTR shadowOAM[128];

// attribute 0
#define ATTR0_REGULAR      (0<<8)  // normal rendering
#define ATTR0_AFFINE       (1<<8)  // affine rendering
#define ATTR0_HIDE         (2<<8)  // no rendering (hidden)
#define ATTR0_DOUBLEAFFINE (3<<8)  // double affine rendering
#define ATTR0_NOBLEND      (0<<10) // disable alpha blending
#define ATTR0_BLEND        (1<<10) // enable alpha blending
#define ATTR0_WINDOW       (2<<10) // object window mode
#define ATTR0_MOSAIC       (1<<12) // enable mosaic effect
#define ATTR0_4BPP         (0<<13)
#define ATTR0_8BPP         (1<<13)
#define ATTR0_SQUARE       (0<<14)
#define ATTR0_WIDE         (1<<14) //        |  TINY  | SMALL  | MEDIUM | LARGE  |
#define ATTR0_TALL         (2<<14) // --------------------------------------------
                                   // SQUARE |  8x8   | 16x16  | 32x32  | 64x64  |
// attribute 1                     // --------------------------------------------
#define ATTR1_HFLIP  (1<<12)       //  WIDE  |  16x8  | 32x8   | 32x16  | 64x32  |
#define ATTR1_VFLIP  (1<<13)       // --------------------------------------------
#define ATTR1_TINY   (0<<14)       //  TALL  |  8x16  | 8x32   | 16x32  | 32x64  |
#define ATTR1_SMALL  (1<<14)       // --------------------------------------------
#define ATTR1_MEDIUM (2<<14)
#define ATTR1_LARGE  (3<<14)

// attribute 2
#define ATTR2_TILEID(row, col) ((row)*32+(col))
#define ATTR2_PRIORITY(num)    ((num)<<10)
#define ATTR2_PALROW(row)      ((row)<<12)

// sprite functions
void hideSprites();

// sprite constants
#define ROWMASK 0xFF
#define COLMASK 0x1FF

// generic struct for animated sprite
// note: animation sprite variables are as followed:
// aniCounter: used to count how many frames have passed
// curFrame: which frame of animation sprite is in (row in spritesheet)
// numFrames: the total number of frames
// aniState: which state of animation sprite is in (column in spritesheet)
typedef struct {
    int screenRow;
    int screenCol;
    int worldRow;
    int worldCol;
    int rdel;
    int cdel;
    int width;
    int height;
    int aniCounter;
    int aniState;
    int prevAniState;
    int curFrame;
    int numFrames;
    int hide;
} ANISPRITE;

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
void DMANow(int channel, volatile const void *src, volatile void *dst, u32 cnt);


#endif