// GBA Video Registers and Flags
#define REG_DISPCTL (*(u16 *)0x4000000)
#define MODE3 3
#define BG2_ENABLE (1<<10)

// Create a color with the specified RGB values
#define COLOR(r, g, b) ((r) | (g)<<5 | (b)<<10)

// Calculate the position of a pixel based on its row and column
#define OFFSET(r, c, rowlen) ((r)*(rowlen)+(c))

// Predefined colors
#define PINK COLOR(31, 10, 20)
#define WHITE COLOR(31, 31, 31)

// Typedef
typedef unsigned short u16;

// Function Prototypes
void setPixel(int, int, u16);
void drawHorizontalLine(int, int, int, u16);
void drawVerticalLine(int, int, int, u16);
void drawDiagonalLine_DownLeft_Slope2(int, int, int, u16);
void drawDiagonalLine_DownRight_Slope2(int, int, int, u16);
void drawDiagonalLine_DownLeft(int, int, int, u16);
void drawDiagonalLine_DownRight(int, int, int, u16);
void frame1();
void frame2();
void frame3();
void frame4();
void frame5();
void setBackground(u16);
void delay(int);
void drawL_WithHearts(int, int, int, u16);
void drawO_WithHearts(int, int, int, u16);
void drawV_WithHearts(int, int, int, u16);
void drawE_WithHearts(int, int, int, u16);
void drawDiagonalLine_DownLeft_Slope2_WithHearts(int, int, int, u16);
void drawDiagonalLine_DownRight_Slope2_WithHearts(int, int, int, u16);
void drawVerticalLine_WithHearts(int, int, int, u16);
void drawHorizontalLine_WithHearts(int, int, int, u16);
void drawHeart(int, int, int, u16);
void drawTriangle_HeartTop(int, int, int, u16);
void drawTriangle_HeartBottom(int, int, int, u16);
void fillTriangle_HeartTop(int, int, int, u16);
void fillTriangle_HeartBottom(int, int, int, u16);

// Global Variables
unsigned short *videoBuffer = (u16 *)0x6000000;
unsigned int rowlen = 240;

int main() {
    REG_DISPCTL = MODE3 | BG2_ENABLE;

    while(1) {
        setBackground(WHITE);
        frame1();
        delay(250);

        setBackground(WHITE);
        frame2();
        delay(250);

        setBackground(WHITE);
        frame3();
        delay(250);

        setBackground(WHITE);
        frame4();
        delay(250);

        setBackground(WHITE);
        frame5();
        delay(250);
    }
}

// void waitForVBlank() {
//     while (*scanlineCounter >= 160);
//     while (*scanlineCounter < 160);
// }
void setBackground(u16 color) {
    for (int i = 0; i < 38400; i++) {
        videoBuffer[i] = color;
    }
}
void delay(int amount) {
    volatile int trash = 0;
    for (int i = 0; i < 1000 * amount; i++) {
        trash++;
    }
}

void frame1() {
    drawL_WithHearts(50, 100, 40, PINK);
}

void frame2() {
    drawO_WithHearts(50, 100, 40, PINK);
}

void frame3() {
    drawV_WithHearts(50, 85, 25, PINK);
}

void frame4() {
    drawE_WithHearts(50, 100, 40, PINK);
}

void frame5() {
    drawL_WithHearts(50, 20, 40, PINK);
    drawO_WithHearts(50, 70, 40, PINK);
    drawV_WithHearts(50, 110, 25, PINK);
    drawE_WithHearts(50, 180, 40, PINK);
}

void drawL_WithHearts(int row, int col, int length, u16 color) {
    drawHorizontalLine_WithHearts(row + length, col, length, color);
    drawVerticalLine_WithHearts(row, col, length, color);
}

void drawO_WithHearts(int row, int col, int length, u16 color) {
    drawHorizontalLine_WithHearts(row, col, length, color);
    drawHorizontalLine_WithHearts(row + length, col, length, color);
    drawVerticalLine_WithHearts(row, col, length, color);
    drawVerticalLine_WithHearts(row, col + length - 10, length, color);
}

void drawV_WithHearts(int row, int col, int length, u16 color) {
    drawDiagonalLine_DownLeft_Slope2_WithHearts(row, col + 8, length, color);
    drawDiagonalLine_DownRight_Slope2_WithHearts(row, col + (2 * length),
        length, color);
}

void drawE_WithHearts(int row, int col, int length, u16 color) {
    drawVerticalLine_WithHearts(row, col, length, color);
    drawHorizontalLine_WithHearts(row, col, length, color);
    drawHorizontalLine_WithHearts(row + length, col, length, color);
    drawHorizontalLine_WithHearts(row + (length / 2), col, length, color);

}

void drawDiagonalLine_DownLeft_Slope2_WithHearts(int row, int col, int length,
    u16 color) {
    for (int i = 0; i < length; i += 5) {
        drawHeart(row + (2 * i), col + i, 5, color);
    }
}

void drawDiagonalLine_DownRight_Slope2_WithHearts(int row, int col, int length,
    u16 color) {
    for (int i = 0; i < length; i += 5) {
        drawHeart(row + (2 * i), col - i, 5, color);
    }
}

void drawVerticalLine_WithHearts(int row, int col, int length, u16 color) {
    for (int i = 0; i < length; i += 10) {
        drawHeart(row + i, col, 5, color);
    }
}

void drawHorizontalLine_WithHearts(int row, int col, int length, u16 color) {
    for (int i = 0; i < length; i += 10) {
        drawHeart(row, col + i, 5, color);
    }
}

void drawHeart(int row, int col, int length, u16 color) {
    drawTriangle_HeartTop(row, col, length / 2, color);
    drawTriangle_HeartTop(row, col + length, length / 2, color);
    drawTriangle_HeartBottom(row + length / 2, col + length / 2, length, color);
}

void setPixel(int row, int col, u16 color) {
    videoBuffer[OFFSET(row, col, rowlen)] = color;
}

void drawTriangle_HeartTop(int row, int col, int length, u16 color) {
    drawDiagonalLine_DownLeft(row, col, length, color);
    drawDiagonalLine_DownRight(row, col, length, color);
    fillTriangle_HeartTop(row, col, length, color);
}

void fillTriangle_HeartTop(int row, int col, int length, u16 color) {
    int newRow = row + length;
    int newCol = col - length;
    int newLength = 2 * length;
    for (int i = 0; i <= length; i++) {
        newRow--;
        newCol++;
        newLength -= 2;
        drawHorizontalLine(newRow, newCol, newLength, color);
    }
}

void fillTriangle_HeartBottom(int row, int col, int length, u16 color) {
    int newRow = row - 1;
    int newCol = col - 1;
    int newLength = length;
    for (int i = 0; i <= 2 * length; i++) {
        newRow++;
        newCol++;
        newLength -= 1;
        if (i > 0 && i % 2 == 0) {
            newCol--;
        }
        drawHorizontalLine(newRow, newCol, newLength, color);
    }
}

void drawTriangle_HeartBottom(int row, int col, int length, u16 color) {
    drawDiagonalLine_DownLeft_Slope2(row, col - length, length, color);
    drawDiagonalLine_DownRight_Slope2(row, col + length, length, color);
    fillTriangle_HeartBottom(row, col - length + 1, 2 * length, color);
}

void drawDiagonalLine_DownLeft_Slope2(int row, int col, int length, u16 color) {
    for (int i = 0; i < length; i++) {
        setPixel(row + (2 * i), col + i, color);
    }
}

void drawDiagonalLine_DownRight_Slope2(int row, int col, int length,
    u16 color) {
    for (int i = 0; i < length; i++) {
        setPixel(row + (2 * i), col - i, color);
    }
}

void drawDiagonalLine_DownLeft(int row, int col, int length, u16 color) {
    for (int i = 0; i < length; i++) {
        setPixel(row + i, col + i, color);
    }
}

void drawDiagonalLine_DownRight(int row, int col, int length, u16 color) {
    for (int i = 0; i < length; i++) {
        setPixel(row + i, col - i, color);
    }
}

void drawVerticalLine(int row, int col, int length, u16 color) {
    for (int i = 0; i < length; i++) {
        setPixel(row + i, col, color);
    }
}

void drawHorizontalLine(int row, int col, int length, u16 color) {
    for (int i = 0; i < length; i++) {
        setPixel(row, col + i, color);
    }
}