#include <stdlib.h>
#include "cloudBG.h"
#include "gameLogic.h"
#include "instructions.h"
#include "lose.h"
#include "myLib.h"
#include "pause.h"
#include "pawBG.h"
#include "sound.h"
#include "spriteSheet.h"
#include "start.h"
#include "win.h"

// boxes
ANISPRITE boxes[BOXCOUNT1];
ANISPRITE boxes2[BOXCOUNT2];
ANISPRITE boxes3[BOXCOUNT3];
int boxesRemaining;

// number of pets
int numberOfPets;

// kitty
ANISPRITE kitty;

// fish
ANISPRITE fish;

// shadow OAM
OBJ_ATTR shadowOAM[128];

// cheat
int cheat;

// counter
volatile counter;

void initLevel1()
{

    // load sprite sheet palette and tiles
    DMANow(3, spriteSheetPal, SPRITEPALETTE, 256);
    DMANow(3, spriteSheetTiles, &CHARBLOCK[4], 16384);
    boxesRemaining = BOXCOUNT1 + BOXCOUNT2 + BOXCOUNT3;
    numberOfPets = 0;
    initBoxes1();
    initKitty1();
    initFish1();
}

void initLevel2()
{

    // load sprite sheet palette and tiles
    DMANow(3, spriteSheetPal, SPRITEPALETTE, 256);
    DMANow(3, spriteSheetTiles, &CHARBLOCK[4], 16384);
    initBoxes2();
    initKitty2();
    initFish2();
}

void initLevel3()
{

    // load sprite sheet palette and tiles
    DMANow(3, spriteSheetPal, SPRITEPALETTE, 256);
    DMANow(3, spriteSheetTiles, &CHARBLOCK[4], 16384);
    initBoxes3();
    initKitty3();
    initFish3();
}

void drawLevel1()
{
    counter++;
    // draw kitty
    drawKitty();

    // draw fish
    drawFish();

    // draw boxes
    for (int i = 0; i < BOXCOUNT1; i++)
    {
        drawBoxes(&boxes[i]);
    }
}

void drawLevel2()
{
    counter++;
    // draw kitty
    drawKitty();

    // draw fish
    drawFish();

    // draw boxes
    for (int i = 0; i < BOXCOUNT2; i++)
    {
        drawBoxes(&boxes2[i]);
    }
    // erase level 1 boxes
    for (int i = 0; i < BOXCOUNT1; i++)
    {
        boxes[i].active = 0;
        drawBoxes(&boxes[i]);
    }
}

void drawLevel3()
{
    counter++;
    // draw kitty
    drawKitty();

    // draw fish
    drawFish();

    // draw boxes
    for (int i = 0; i < BOXCOUNT3; i++)
    {
        drawBoxes(&boxes3[i]);
    }
    // erase level 1 boxes
    for (int i = 0; i < BOXCOUNT1; i++)
    {
        boxes[i].active = 0;
        drawBoxes(&boxes[i]);
    }
    // erase level 2 boxes
    for (int i = 0; i < BOXCOUNT2; i++)
    {
        boxes2[i].active = 0;
        drawBoxes(&boxes2[i]);
    }
}

void updateLevel1()
{
    // update kitty
    updateKitty1(&kitty);
}

void updateLevel2()
{
    // update kitty
    updateKitty2(&kitty);
}

void updateLevel3()
{
    // update kitty
    updateKitty3(&kitty);
}

void initBoxes1()
{

    for (int i = 0; i < BOXCOUNT1; i++)
    {
        boxes[i].width = 32;
        boxes[i].height = 32;
        boxes[i].aniState = 1;
        boxes[i].curFrame = 0;
        boxes[i].active = 1;
        boxes[i].numFrames = 2;
        boxes[i].index = i + 2;
    }
    int row1 = SCREENHEIGHT - 42;
    int row2 = row1 - 32;
    int row3 = row2 - 32;
    int row4 = row3 - 32;

    int col1 = 5;
    int col2 = col1 + 32;
    int col3 = col2 + 32;
    int col4 = col3 + 32;
    int col5 = col4 + 32;
    int col6 = col5 + 32;
    int col7 = col6 + 32;

    boxes[0].row = row1;
    boxes[0].col = col1;
    boxes[1].row = row1;
    boxes[1].col = col2;
    boxes[2].row = row1;
    boxes[2].col = col3;
    boxes[3].row = row1;
    boxes[3].col = col4;
    boxes[4].row = row1;
    boxes[4].col = col5;
    boxes[5].row = row1;
    boxes[5].col = col6;
    boxes[6].row = row1;
    boxes[6].col = col7;
    boxes[7].row = row2;
    boxes[7].col = col2;
    boxes[8].row = row2;
    boxes[8].col = col3;
    boxes[9].row = row2;
    boxes[9].col = col6;
    boxes[10].row = row2;
    boxes[10].col = col7;
    boxes[11].row = row3;
    boxes[11].col = col5;
    boxes[12].row = row3;
    boxes[12].col = col6;
    boxes[13].row = row3;
    boxes[13].col = col7;
    boxes[14].row = row4;
    boxes[14].col = col5;
    boxes[15].row = row4;
    boxes[15].col = col6;
    boxes[16].row = row4;
    boxes[16].col = col7;
    boxes[17].row = row3;
    boxes[17].col = col4;
    boxes[18].row = row4;
    boxes[18].col = col4;
    boxes[19].row = row4;
    boxes[19].col = col3;
    boxes[20].row = row4;
    boxes[20].col = col2;
    boxes[21].row = row4;
    boxes[21].col = col1;
    boxes[22].row = row3;
    boxes[22].col = col1;
}

void initBoxes2()
{

    for (int i = 0; i < BOXCOUNT2; i++)
    {
        boxes2[i].width = 32;
        boxes2[i].height = 32;
        boxes2[i].aniState = 1;
        boxes2[i].curFrame = 0;
        boxes2[i].active = 1;
        boxes2[i].numFrames = 2;
        boxes2[i].index = i + 25;
    }
    int row1 = SCREENHEIGHT - 42;
    int row2 = row1 - 32;
    int row3 = row2 - 32;
    int row4 = row3 - 32;

    int col1 = 5;
    int col2 = col1 + 32;
    int col3 = col2 + 32;
    int col4 = col3 + 32;
    int col5 = col4 + 32;
    int col6 = col5 + 32;
    int col7 = col6 + 32;

    boxes2[0].row = row1;
    boxes2[0].col = col6;
    boxes2[1].row = row1;
    boxes2[1].col = col2;
    boxes2[2].row = row1;
    boxes2[2].col = col3;
    boxes2[3].row = row1;
    boxes2[3].col = col4;
    boxes2[4].row = row2;
    boxes2[4].col = col2;
    boxes2[5].row = row2;
    boxes2[5].col = col3;
    boxes2[6].row = row2;
    boxes2[6].col = col4;
    boxes2[7].row = row2;
    boxes2[7].col = col6;
    boxes2[8].row = row2;
    boxes2[8].col = col7;
    boxes2[9].row = row3;
    boxes2[9].col = col2;
    boxes2[10].row = row3;
    boxes2[10].col = col3;
    boxes2[11].row = row3;
    boxes2[11].col = col4;
    boxes2[12].row = row3;
    boxes2[12].col = col5;
    boxes2[13].row = row3;
    boxes2[13].col = col6;
    boxes2[14].row = row3;
    boxes2[14].col = col7;
    boxes2[15].row = row4;
    boxes2[15].col = col1;
    boxes2[16].row = row4;
    boxes2[16].col = col2;
    boxes2[17].row = row4;
    boxes2[17].col = col4;
    boxes2[18].row = row4;
    boxes2[18].col = col5;
    boxes2[19].row = row3;
    boxes2[19].col = col1;
}

void initBoxes3()
{

    for (int i = 0; i < BOXCOUNT3; i++)
    {
        boxes3[i].width = 32;
        boxes3[i].height = 32;
        boxes3[i].aniState = 1;
        boxes3[i].curFrame = 0;
        boxes3[i].active = 1;
        boxes3[i].numFrames = 2;
        boxes3[i].index = i + 45;
    }
    int row1 = SCREENHEIGHT - 42;
    int row2 = row1 - 32;
    int row3 = row2 - 32;
    int row4 = row3 - 32;

    int col1 = 5;
    int col2 = col1 + 32;
    int col3 = col2 + 32;
    int col4 = col3 + 32;
    int col5 = col4 + 32;
    int col6 = col5 + 32;
    int col7 = col6 + 32;

    boxes3[0].row = row4;
    boxes3[0].col = col7;
    boxes3[1].row = row1;
    boxes3[1].col = col2;
    boxes3[2].row = row1;
    boxes3[2].col = col3;
    boxes3[3].row = row1;
    boxes3[3].col = col4;
    boxes3[4].row = row1;
    boxes3[4].col = col5;
    boxes3[5].row = row1;
    boxes3[5].col = col6;
    boxes3[6].row = row1;
    boxes3[6].col = col7;
    boxes3[7].row = row2;
    boxes3[7].col = col2;
    boxes3[8].row = row2;
    boxes3[8].col = col3;
    boxes3[9].row = row2;
    boxes3[9].col = col5;
    boxes3[10].row = row2;
    boxes3[10].col = col7;
    boxes3[11].row = row3;
    boxes3[11].col = col1;
    boxes3[12].row = row3;
    boxes3[12].col = col2;
    boxes3[13].row = row3;
    boxes3[13].col = col3;
    boxes3[14].row = row3;
    boxes3[14].col = col4;
    boxes3[15].row = row3;
    boxes3[15].col = col5;
    boxes3[16].row = row3;
    boxes3[16].col = col6;
    boxes3[17].row = row3;
    boxes3[17].col = col7;
    boxes3[18].row = row4;
    boxes3[18].col = col1;
    boxes3[19].row = row4;
    boxes3[19].col = col2;
    boxes3[20].row = row4;
    boxes3[20].col = col3;
    boxes3[21].row = row2;
    boxes3[21].col = col1;
}

void initKitty1()
{

    kitty.row = boxes[0].row - 18;
    kitty.col = boxes[0].col;
    kitty.rdel = 32;
    kitty.cdel = 32;
    kitty.width = 32;
    kitty.height = 32;
    kitty.aniState = 0;
    kitty.curFrame = 0;
    kitty.active = 1;
    kitty.numFrames = 8;
    kitty.left = 0;
}

void initKitty2()
{

    kitty.row = boxes2[0].row - 18;
    kitty.col = boxes2[0].col;
    kitty.rdel = 32;
    kitty.cdel = 32;
    kitty.width = 32;
    kitty.height = 32;
    kitty.aniState = 0;
    kitty.curFrame = 0;
    kitty.active = 1;
    kitty.numFrames = 8;
    kitty.left = 0;
}

void initKitty3()
{

    kitty.row = boxes3[0].row - 18;
    kitty.col = boxes3[0].col;
    kitty.rdel = 32;
    kitty.cdel = 32;
    kitty.width = 32;
    kitty.height = 32;
    kitty.aniState = 0;
    kitty.curFrame = 0;
    kitty.active = 1;
    kitty.numFrames = 8;
    kitty.left = 0;
}

void initFish1()
{
    fish.row = boxes[BOXCOUNT1 - 1].row;
    fish.col = boxes[BOXCOUNT1 - 1].col + 7;
    fish.width = 16;
    fish.height = 16;
    fish.aniState = 4;
    fish.curFrame = 0;
    fish.active = 1;
    fish.numFrames = 11;
}

void initFish2()
{
    fish.row = boxes2[BOXCOUNT2 - 1].row;
    fish.col = boxes2[BOXCOUNT2 - 1].col + 7;
    fish.width = 16;
    fish.height = 16;
    fish.aniState = 4;
    fish.curFrame = 0;
    fish.active = 1;
    fish.numFrames = 11;
}

void initFish3()
{
    fish.row = boxes3[BOXCOUNT3 - 1].row;
    fish.col = boxes3[BOXCOUNT3 - 1].col + 7;
    fish.width = 16;
    fish.height = 16;
    fish.aniState = 4;
    fish.curFrame = 0;
    fish.active = 1;
    fish.numFrames = 11;
}

void drawKitty()
{
    if (counter % 30 == 0) {
         kitty.curFrame = (kitty.curFrame + 1) % kitty.numFrames;
    }
    shadowOAM[0].attr0 = kitty.row | ATTR0_SQUARE | ATTR0_4BPP;
    shadowOAM[0].attr1 = kitty.col | ATTR1_MEDIUM;
    if (kitty.left) {
        shadowOAM[0].attr1 |= ATTR1_HFLIP;
    } else {
        shadowOAM[0].attr1 |= (0<<12);
    }
    shadowOAM[0].attr2 = ATTR2_TILEID((kitty.curFrame) * 4, (kitty.aniState) * 4) | ATTR2_PALROW(0);
}

void drawBoxes(ANISPRITE *b)
{
    if (b->active)
    {
        shadowOAM[b->index].attr0 = b->row | ATTR0_SQUARE | ATTR0_4BPP;
        shadowOAM[b->index].attr1 = b->col | ATTR1_MEDIUM;
        shadowOAM[b->index].attr2 = ATTR2_TILEID((b->curFrame) * 4, (b->aniState) * 4) | ATTR2_PALROW(0);
    }
    else
    {
        shadowOAM[b->index].attr0 = ATTR0_HIDE;
    }
}

void drawFish()
{
    if (fish.active)
    {
        if (counter % 10 == 0) {
            fish.curFrame = (fish.curFrame + 1) % fish.numFrames;
        }
        shadowOAM[1].attr0 = fish.row | ATTR0_SQUARE | ATTR0_4BPP;
        shadowOAM[1].attr1 = fish.col | ATTR1_SMALL;
        shadowOAM[1].attr2 = ATTR2_TILEID(fish.curFrame * 2, fish.aniState * 2) | ATTR2_PALROW(0);
    }
    else
    {
        shadowOAM[1].attr0 = ATTR0_HIDE;
    }
}

void updateKitty1(ANISPRITE *k)
{
    // remove box that kitty jumps from
    volatile int boxToRemoveIndex;
    volatile int jumpedToNoBox;
    // only remove box if cheat not enabled
    if (!cheat) {
        for (int i = 0; i < BOXCOUNT1; i++)
        {
            if (((k->row + 18) == boxes[i].row) && (k->col == boxes[i].col))
            {
                boxToRemoveIndex = i;
                jumpedToNoBox = 0;
                break;
            }
            else
            {
                jumpedToNoBox = 1;
            }
        }
    }

    // if kitty jumps to a place where no box ever was, you lose
    if (jumpedToNoBox == 1)
    {
        k->active = 0;
    }

    // if kitty jumps to inactive box, you lose
    for (int i = 0; i < BOXCOUNT1; i++)
    {
        if (!boxes[i].active)
        {
            if ((((k->row + 18) == boxes[i].row) && (k->col == boxes[i].col)))
            {
                k->active = 0;
            }
        }
    }

    // move left
    if (BUTTON_PRESSED(BUTTON_LEFT))
    {
        k->col -= k->cdel;
        boxes[boxToRemoveIndex].active = 0;
        // only decrease the boxesRemaining if the cheat
        // is not activated
        if (!cheat) {
            boxesRemaining--;
        }
        k->left = 1;
    }

    // move right
    if (BUTTON_PRESSED(BUTTON_RIGHT))
    {
        k->col += k->cdel;
        boxes[boxToRemoveIndex].active = 0;
        // only decrease the boxesRemaining if the cheat
        // is not activated
        if (!cheat) {
            boxesRemaining--;
        }
        k->left = 0;
    }

    // move up
    if (BUTTON_PRESSED(BUTTON_UP))
    {
        k->row -= k->rdel;
        boxes[boxToRemoveIndex].active = 0;
        // only decrease the boxesRemaining if the cheat
        // is not activated
        if (!cheat) {
            boxesRemaining--;
        }
    }

    // move right
    if (BUTTON_PRESSED(BUTTON_DOWN))
    {
        k->row += k->rdel;
        boxes[boxToRemoveIndex].active = 0;
        // only decrease the boxesRemaining if the cheat
        // is not activated
        if (!cheat) {
            boxesRemaining--;
        }
    }
}

void updateKitty2(ANISPRITE *k)
{
    // remove box that kitty jumps from
    volatile int boxToRemoveIndex;
    volatile int jumpedToNoBox;
    // only remove box if cheat not enabled
    if (!cheat) {
        for (int i = 0; i < BOXCOUNT2; i++)
        {
            if (((k->row + 18) == boxes2[i].row) && (k->col == boxes2[i].col))
            {
                boxToRemoveIndex = i;
                jumpedToNoBox = 0;
                break;
            }
            else
            {
                jumpedToNoBox = 1;
            }
        }
    }

    // if kitty jumps to a place where no box ever was, you lose
    if (jumpedToNoBox == 1)
    {
        k->active = 0;
    }

    // if kitty jumps to inactive box, you lose
    for (int i = 0; i < BOXCOUNT2; i++)
    {
        if (!boxes2[i].active)
        {
            if ((((k->row + 18) == boxes2[i].row) && (k->col == boxes2[i].col)))
            {
                k->active = 0;
            }
        }
    }

    // move left
    if (BUTTON_PRESSED(BUTTON_LEFT))
    {
        k->col -= k->cdel;
        boxes2[boxToRemoveIndex].active = 0;
        // only decrease the boxesRemaining if the cheat
        // is not activated
        if (!cheat) {
            boxesRemaining--;
        }
        k->left = 1;
    }

    // move right
    if (BUTTON_PRESSED(BUTTON_RIGHT))
    {
        k->col += k->cdel;
        boxes2[boxToRemoveIndex].active = 0;
        // only decrease the boxesRemaining if the cheat
        // is not activated
        if (!cheat) {
            boxesRemaining--;
        }
        k->left = 0;
    }

    // move up
    if (BUTTON_PRESSED(BUTTON_UP))
    {
        k->row -= k->rdel;
        boxes2[boxToRemoveIndex].active = 0;
        // only decrease the boxesRemaining if the cheat
        // is not activated
        if (!cheat) {
            boxesRemaining--;
        }
    }

    // move right
    if (BUTTON_PRESSED(BUTTON_DOWN))
    {
        k->row += k->rdel;
        boxes2[boxToRemoveIndex].active = 0;
        // only decrease the boxesRemaining if the cheat
        // is not activated
        if (!cheat) {
            boxesRemaining--;
        }
    }
}

void updateKitty3(ANISPRITE *k)
{
    // remove box that kitty jumps from
    volatile int boxToRemoveIndex;
    volatile int jumpedToNoBox;
    // only remove box if cheat not enabled
    if (!cheat) {
        for (int i = 0; i < BOXCOUNT3; i++)
        {
            if (((k->row + 18) == boxes3[i].row) && (k->col == boxes3[i].col))
            {
                boxToRemoveIndex = i;
                jumpedToNoBox = 0;
                break;
            }
            else
            {
                jumpedToNoBox = 1;
            }
        }
    }

    // if kitty jumps to a place where no box ever was, you lose
    if (jumpedToNoBox == 1)
    {
        k->active = 0;
    }

    // if kitty jumps to inactive box, you lose
    for (int i = 0; i < BOXCOUNT3; i++)
    {
        if (!boxes3[i].active)
        {
            if ((((k->row + 18) == boxes3[i].row) && (k->col == boxes3[i].col)))
            {
                k->active = 0;
            }
        }
    }

    // move left
    if (BUTTON_PRESSED(BUTTON_LEFT))
    {
        k->col -= k->cdel;
        boxes3[boxToRemoveIndex].active = 0;
        // only decrease the boxesRemaining if the cheat
        // is not activated
        if (!cheat) {
            boxesRemaining--;
        }
        k->left = 1;
    }

    // move right
    if (BUTTON_PRESSED(BUTTON_RIGHT))
    {
        k->col += k->cdel;
        boxes3[boxToRemoveIndex].active = 0;
        // only decrease the boxesRemaining if the cheat
        // is not activated
        if (!cheat) {
            boxesRemaining--;
        }
        k->left = 0;
    }

    // move up
    if (BUTTON_PRESSED(BUTTON_UP))
    {
        k->row -= k->rdel;
        boxes3[boxToRemoveIndex].active = 0;
        // only decrease the boxesRemaining if the cheat
        // is not activated
        if (!cheat) {
            boxesRemaining--;
        }
    }

    // move right
    if (BUTTON_PRESSED(BUTTON_DOWN))
    {
        k->row += k->rdel;
        boxes3[boxToRemoveIndex].active = 0;
        // only decrease the boxesRemaining if the cheat
        // is not activated
        if (!cheat) {
            boxesRemaining--;
        }
    }
}

int collision(int rowA, int colA, int heightA, int widthA,
              int rowB, int colB, int heightB, int widthB)
{

    return rowA + heightA >= rowB && rowA <= rowB + heightB && colA + widthA >= colB && colA <= colB + widthB;
}