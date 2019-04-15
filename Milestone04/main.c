/*

COMPLETED
--------------------------------------------------
- more than two sprites (score, cat, fish, and boxes are sprites)
- 2 animated sprites (blinking cat and shining fish)
- two simultaneous backgrounds on the game state screen
- both a win and a lose state as well as a start, instructions, pause, and game state
    - the game state encompasses the following states:
        - LEVEL1
        - LEVEl2
        - LEVEL3
- 4 different sounds, 3 of which loop, and 1 is played simultaneously
    - the 3 that loop are the pause music, game music, and main music (for the start and instruction screens)
    - a meow (that does not loop) is played over the game music when the kitty reaches the fish
        - the meow is not the best quality, but I wanted to record my cat meowing and use that sound, which is what I did
- a cheat toggled with the "SELECT" button that makes boxes indestructible
- a comprehensive instructions screen that allows for intuitive gameplay
- a score (pets) that is shown on the win and lost screen
    - the score correlates to the number of boxes broken
- bug-free gameplay

TODO
--------------------------------------------------
- get a better original sound file of my cat meowing lol
- better art if time permits
- code clean up if time permits

HOW TO PLAY
--------------------------------------------------
- toggle cheat (which makes boxes indestructible) with SELECT
- move the kitty around with the arrow keys
- return to the game from the pause screen with enter
- enter the pause screen with enter
- return to the start screen from the win or lose screen with enter
- return to the start screen from the home screen with select
- win by beating all 3 levels!
    - win each level by getting to the fish treat
    - you'll want to destroy as many boxes as possible to get the highest score
        - the score equates to the number of pets you receive
- lose by jumping to a play where there is no box on the screen
*/

#include <stdlib.h>
#include "cloudBG.h"
#include "gameLogic.h"
#include "gameMusic.h"
#include "instructions.h"
#include "level1.h"
#include "level2.h"
#include "level3.h"
#include "lose.h"
#include "mainMusic.h"
#include "meow.h"
#include "myLib.h"
#include "pause.h"
#include "pauseMusic.h"
#include "pawBG.h"
#include "sound.h"
#include "spriteSheet.h"
#include "start.h"
#include "win.h"

// prototypes
void initialize();

// state prototypes
void startState();
void goToStart();
void insturctionsState();
void goToInstructions();
void goToLevel1Intro();
void level1IntroState();
void level1State();
void goToLevel1();
void goToLevel2Intro();
void level2IntroState();
void level2State();
void goToLevel2();
void goToLevel3Intro();
void level3IntroState();
void level3State();
void goToLevel3();
void pauseState();
void goToPause();
void winState();
void goToWin();
void loseState();
void goToLose();

// states
enum
{
    START,
    INSTRUCTIONS,
    LEVEL1,
    LEVEL1_INTRO,
    LEVEL2,
    LEVEL2_INTRO,
    LEVEL3,
    LEVEL3_INTRO,
    PAUSE,
    WIN,
    LOSE
};
int state;

// current level
int curLevel = 1;

// random Seed
int seed;

// buttons
u16 buttons;
u16 oldButtons;

// vertical and horizontal background offset
int hOff;
int vOff;

// text buffer
char buffer[41];

// shadow OAM
OBJ_ATTR shadowOAM[128];

// cheat
extern int cheat;

// score
int score;

int main()
{

    initialize();

    while (1)
    {

        // update button variables
        oldButtons = buttons;
        buttons = BUTTONS;

        // state machine
        switch (state)
        {
        case START:
            startState();
            break;
        case INSTRUCTIONS:
            insturctionsState();
            break;
        case LEVEL1_INTRO:
            level1IntroState();
            break;
        case LEVEL1:
            level1State();
            break;
        case LEVEL2_INTRO:
            level2IntroState();
            break;
        case LEVEL2:
            level2State();
            break;
        case LEVEL3_INTRO:
            level3IntroState();
            break;
        case LEVEL3:
            level3State();
            break;
        case PAUSE:
            pauseState();
            break;
        case WIN:
            winState();
            break;
        case LOSE:
            loseState();
            break;
        default:
            break;
        }
    }
}

void initialize()
{

    // enable mode 0, background 0, and background 1
    REG_DISPCTL = MODE0 | BG0_ENABLE | BG1_ENABLE | SPRITE_ENABLE;

    // set up background 0 control register
    // note: | 1 to set background priority
    REG_BG0CNT = BG_8BPP | BG_SIZE_SMALL | BG_CHARBLOCK(0) | BG_SCREENBLOCK(28);

    // set up background 1 control register
    REG_BG1CNT = BG_8BPP | BG_SIZE_SMALL | BG_CHARBLOCK(2) | BG_SCREENBLOCK(30);

    // button initialization
    buttons = BUTTONS;
    oldButtons = 0;

    // set up sounds
    setupSounds();
    setupInterrupts();

    goToStart();
}

void startState()
{
    seed++;

    if (BUTTON_PRESSED(BUTTON_A))
    {
        goToInstructions();
    }

    else if (BUTTON_PRESSED(BUTTON_B))
    {
        srand(seed);
        goToLevel1Intro();
        initLevel1();
    }
}

void goToStart()
{
    // turn off cheat
    cheat = 0;
    REG_BG0HOFF = 0;
    REG_BG1HOFF = 0;
    // load tiles into charblocks
    DMANow(3, startTiles, &CHARBLOCK[0], 7008);
    DMANow(3, startTiles, &CHARBLOCK[2], 7008);
    // load maps into screenblocks
    DMANow(3, startMap, &SCREENBLOCK[28], 1024);
    DMANow(3, startMap, &SCREENBLOCK[30], 1024);
    // set palette
    DMANow(3, startPal, PALETTE, 256);
    // play main music
    stopSound();
    playSoundA(mainMusic, MAINMUSICLEN, MAINMUSICFREQ, 1);
    hideSprites();
    DMANow(3, shadowOAM, OAM, 128 * 4);
    waitForVBlank();
    state = START;
}

void insturctionsState()
{
    seed++;

    waitForVBlank();

    if (BUTTON_PRESSED(BUTTON_START))
    {
        srand(seed);
        goToLevel1Intro();
        initLevel1();
    }

    if (BUTTON_PRESSED(BUTTON_SELECT))
    {
        goToStart();
    }
}

void goToInstructions()
{
    REG_BG0HOFF = 0;
    REG_BG1HOFF = 0;
    // load tiles into charblocks
    DMANow(3, instructionsTiles, &CHARBLOCK[0], 9760);
    DMANow(3, instructionsTiles, &CHARBLOCK[2], 9760);
    // load maps into screenblocks
    DMANow(3, instructionsMap, &SCREENBLOCK[28], 1024);
    DMANow(3, instructionsMap, &SCREENBLOCK[30], 1024);
    // set palette
    DMANow(3, instructionsPal, PALETTE, 256);
    hideSprites();
    DMANow(3, shadowOAM, OAM, 128 * 4);
    waitForVBlank();
    state = INSTRUCTIONS;
}

void goToLevel1Intro()
{
    REG_BG0HOFF = 0;
    REG_BG1HOFF = 0;
    // load tiles into charblocks
    DMANow(3, level1Tiles, &CHARBLOCK[0], 9344);
    DMANow(3, level1Tiles, &CHARBLOCK[2], 9344);
    // load maps into screenblocks
    DMANow(3, level1Map, &SCREENBLOCK[28], 1024);
    DMANow(3, level1Map, &SCREENBLOCK[30], 1024);
    // set palette
    DMANow(3, level1Pal, PALETTE, 256);
    // play game music
    stopSound();
    playSoundA(gameMusic, GAMEMUSICLEN, GAMEMUSICFREQ, 1);
    hideSprites();
    DMANow(3, shadowOAM, OAM, 128 * 4);
    waitForVBlank();
    state = LEVEL1_INTRO;
}
void level1IntroState()
{
    volatile int i = 0;
    while (i < 500000)
    {
        i++;
    }
    goToLevel1();
}

void level1State()
{
    updateLevel1();
    drawLevel1();
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, 128 * 4);

    // press select to toggle cheat
    if (BUTTON_PRESSED(BUTTON_SELECT))
    {
        if (cheat)
        {
            cheat = 0;
        }
        else
        {
            cheat = 1;
        }
    }

    // press start to pause
    if (BUTTON_PRESSED(BUTTON_START))
    {
        REG_BG0HOFF = 0;
        REG_BG1HOFF = 0;
        goToPause();
    }

    // if you've reached the fish treat, you've won
    else if (((kitty.row + 18) == fish.row) && ((kitty.col + 7) == fish.col))
    {
        REG_BG0HOFF = 0;
        REG_BG1HOFF = 0;
        stopSoundB();
        playSoundB(meow, MEOWLEN, MEOWFREQ, 0);
        goToLevel2Intro();
        initLevel2();
    }

    // if you've fallen, you'e lost
    else if (kitty.active == 0)
    {
        REG_BG0HOFF = 0;
        REG_BG1HOFF = 0;
        goToLose();
    }

    else
    {
        vOff++;
        // update background 1 horizontal offset
        if (vOff % 10 == 0)
        {
            hOff--;
            REG_BG0HOFF = hOff;
        }
    }
}
void goToLevel1()
{
    curLevel = 1;
    // load tiles into charblocks
    DMANow(3, cloudBGTiles, &CHARBLOCK[0], 7520);
    // load maps into screenblocks
    DMANow(3, cloudBGMap, &SCREENBLOCK[28], 1024);
    // load tiles into charblocks
    DMANow(3, pawBGTiles, &CHARBLOCK[2], 7840);
    // load maps into screenblocks
    DMANow(3, pawBGMap, &SCREENBLOCK[30], 1024);
    // set palette
    DMANow(3, pawBGPal, PALETTE, 256);
    DMANow(3, shadowOAM, OAM, 128 * 4);
    state = LEVEL1;
}

void goToLevel2Intro()
{
    REG_BG0HOFF = 0;
    REG_BG1HOFF = 0;
    // load tiles into charblocks
    DMANow(3, level2Tiles, &CHARBLOCK[0], 9568);
    DMANow(3, level2Tiles, &CHARBLOCK[2], 9568);
    // load maps into screenblocks
    DMANow(3, level2Map, &SCREENBLOCK[28], 1024);
    DMANow(3, level2Map, &SCREENBLOCK[30], 1024);
    // set palette
    DMANow(3, level1Pal, PALETTE, 256);
    hideSprites();
    DMANow(3, shadowOAM, OAM, 128 * 4);
    waitForVBlank();
    state = LEVEL2_INTRO;
}
void level2IntroState()
{
    volatile int i = 0;
    while (i < 500000)
    {
        i++;
    }
    goToLevel2();
}

void level2State()
{
    updateLevel2();
    drawLevel2();
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, 128 * 4);

    // press select to toggle cheat
    if (BUTTON_PRESSED(BUTTON_SELECT))
    {
        if (cheat)
        {
            cheat = 0;
        }
        else
        {
            cheat = 1;
        }
    }

    // press start to pause
    if (BUTTON_PRESSED(BUTTON_START))
    {
        REG_BG0HOFF = 0;
        REG_BG1HOFF = 0;
        goToPause();
    }

    // if you've reached the fish treat, you've won
    else if (((kitty.row + 18) == fish.row) && ((kitty.col + 7) == fish.col))
    {
        REG_BG0HOFF = 0;
        REG_BG1HOFF = 0;
        stopSoundB();
        playSoundB(meow, MEOWLEN, MEOWFREQ, 0);
        goToLevel3Intro();
        initLevel3();
    }

    // if you've fallen, you'e lost
    else if (kitty.active == 0)
    {
        REG_BG0HOFF = 0;
        REG_BG1HOFF = 0;
        goToLose();
    }

    else
    {
        vOff++;
        // update background 1 horizontal offset
        if (vOff % 10 == 0)
        {
            hOff--;
            REG_BG0HOFF = hOff;
        }
    }
}

void goToLevel2()
{
    curLevel = 2;
    // load tiles into charblocks
    DMANow(3, cloudBGTiles, &CHARBLOCK[0], 7520);
    // load maps into screenblocks
    DMANow(3, cloudBGMap, &SCREENBLOCK[28], 1024);
    // load tiles into charblocks
    DMANow(3, pawBGTiles, &CHARBLOCK[2], 7840);
    // load maps into screenblocks
    DMANow(3, pawBGMap, &SCREENBLOCK[30], 1024);
    // set palette
    DMANow(3, pawBGPal, PALETTE, 256);
    DMANow(3, shadowOAM, OAM, 128 * 4);
    state = LEVEL2;
}

void goToLevel3Intro()
{
    REG_BG0HOFF = 0;
    REG_BG1HOFF = 0;
    // load tiles into charblocks
    DMANow(3, level3Tiles, &CHARBLOCK[0], 9536);
    DMANow(3, level3Tiles, &CHARBLOCK[2], 9536);
    // load maps into screenblocks
    DMANow(3, level3Map, &SCREENBLOCK[28], 1024);
    DMANow(3, level3Map, &SCREENBLOCK[30], 1024);
    // set palette
    DMANow(3, level1Pal, PALETTE, 256);
    hideSprites();
    DMANow(3, shadowOAM, OAM, 128 * 4);
    waitForVBlank();
    state = LEVEL3_INTRO;
}
void level3IntroState()
{
    volatile int i = 0;
    while (i < 500000)
    {
        i++;
    }
    goToLevel3();
}

void level3State()
{
    updateLevel3();
    drawLevel3();
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, 128 * 4);

    // press select to toggle cheat
    if (BUTTON_PRESSED(BUTTON_SELECT))
    {
        if (cheat)
        {
            cheat = 0;
        }
        else
        {
            cheat = 1;
        }
    }

    // press start to pause
    if (BUTTON_PRESSED(BUTTON_START))
    {
        REG_BG0HOFF = 0;
        REG_BG1HOFF = 0;
        goToPause();
    }

    // if you've reached the fish treat, you've won
    else if (((kitty.row + 18) == fish.row) && ((kitty.col + 7) == fish.col))
    {
        REG_BG0HOFF = 0;
        REG_BG1HOFF = 0;
        stopSoundB();
        playSoundB(meow, MEOWLEN, MEOWFREQ, 0);
        goToWin();
    }

    // if you've fallen, you'e lost
    else if (kitty.active == 0)
    {
        REG_BG0HOFF = 0;
        REG_BG1HOFF = 0;
        goToLose();
    }

    else
    {
        vOff++;
        // update background 1 horizontal offset
        if (vOff % 10 == 0)
        {
            hOff--;
            REG_BG0HOFF = hOff;
        }
    }
}

void goToLevel3()
{
    curLevel = 3;
    // load tiles into charblocks
    DMANow(3, cloudBGTiles, &CHARBLOCK[0], 7520);
    // load maps into screenblocks
    DMANow(3, cloudBGMap, &SCREENBLOCK[28], 1024);
    // load tiles into charblocks
    DMANow(3, pawBGTiles, &CHARBLOCK[2], 7840);
    // load maps into screenblocks
    DMANow(3, pawBGMap, &SCREENBLOCK[30], 1024);
    // set palette
    DMANow(3, pawBGPal, PALETTE, 256);
    DMANow(3, shadowOAM, OAM, 128 * 4);
    state = LEVEL3;
}

void pauseState()
{

    waitForVBlank();
    // press start to go back to game
    if (BUTTON_PRESSED(BUTTON_START))
    {
        REG_BG1HOFF = 0;
        stopSoundB();
        unpauseSoundA();
        if (curLevel == 1)
        {
            goToLevel1();
        }
        else if (curLevel == 2)
        {
            goToLevel2();
        }
        else if (curLevel == 3)
        {
            goToLevel3();
        }
    }
    // press select to go back to title
    else if (BUTTON_PRESSED(BUTTON_SELECT))
    {
        REG_BG1HOFF = 0;
        goToStart();
    }
    // scroll screen
    else
    {
        vOff++;
        // update background 1 and 0 horizontal offset
        if (vOff % 10 == 0)
        {
            hOff--;
            REG_BG1HOFF = hOff;
            REG_BG0HOFF = hOff;
        }
    }
}

void goToPause()
{
    REG_BG0HOFF = 0;
    REG_BG1HOFF = 0;
    // load tiles into charblocks
    DMANow(3, pauseTiles, &CHARBLOCK[0], 7968);
    DMANow(3, pauseTiles, &CHARBLOCK[2], 7968);
    // load maps into screenblocks
    DMANow(3, pauseMap, &SCREENBLOCK[28], 1024);
    DMANow(3, pauseMap, &SCREENBLOCK[30], 1024);
    // set palette
    DMANow(3, pausePal, PALETTE, 256);
    hideSprites();
    DMANow(3, shadowOAM, OAM, 128 * 4);
    // play music
    pauseSoundA();
    stopSoundB();
    playSoundB(pauseMusic, PAUSEMUSICLEN, PAUSEMUSICFREQ, 1);
    waitForVBlank();
    state = PAUSE;
}

void winState()
{

    waitForVBlank();
    // press start to go to title
    if (BUTTON_PRESSED(BUTTON_START))
    {
        goToStart();
    }
}

void goToWin()
{
    // get score
    score = (BOXCOUNT1 + BOXCOUNT2 + BOXCOUNT3) - boxesRemaining;
    // turn off cheat
    cheat = 0;
    REG_BG0HOFF = 0;
    REG_BG1HOFF = 0;
    // load tiles into charblocks
    DMANow(3, winTiles, &CHARBLOCK[0], 3840);
    DMANow(3, winTiles, &CHARBLOCK[2], 3840);
    // load maps into screenblocks
    DMANow(3, winMap, &SCREENBLOCK[28], 1024);
    DMANow(3, winMap, &SCREENBLOCK[30], 1024);
    // set palette
    DMANow(3, winPal, PALETTE, 256);
    hideSprites();
    drawScore();
    DMANow(3, shadowOAM, OAM, 128 * 4);
    waitForVBlank();
    state = WIN;
}

void loseState()
{

    waitForVBlank();
    // press start to go to title
    if (BUTTON_PRESSED(BUTTON_START))
    {
        goToStart();
    }
}

void goToLose()
{
    // get score
    score = (BOXCOUNT1 + BOXCOUNT2 + BOXCOUNT3) - boxesRemaining;
    // turn off cheat
    cheat = 0;
    REG_BG0HOFF = 0;
    REG_BG1HOFF = 0;
    // load tiles into charblocks
    DMANow(3, loseTiles, &CHARBLOCK[0], 4000);
    DMANow(3, loseTiles, &CHARBLOCK[2], 4000);
    // load maps into screenblocks
    DMANow(3, loseMap, &SCREENBLOCK[28], 1024);
    DMANow(3, loseMap, &SCREENBLOCK[30], 1024);
    // set palette
    DMANow(3, losePal, PALETTE, 256);
    hideSprites();
    drawScore();
    DMANow(3, shadowOAM, OAM, 128 * 4);
    waitForVBlank();
    state = LOSE;
}

void drawScore()
{
    // get the ones and tens place of the score
    // these represent the curFrame (row) of the sprite
    int aniStateIncreased = 0;
    int ones = score % 10;
    int tens = score / 10;
    int scoreAniState = 3;
    if (ones > 7)
    {
        // set currFrame (row) and aniState (col)
        ones -= 8;
        scoreAniState++;
        aniStateIncreased = 1;
    }
    shadowOAM[100].attr0 = 70 | ATTR0_SQUARE | ATTR0_4BPP;
    shadowOAM[100].attr1 = 205 | ATTR1_MEDIUM;
    shadowOAM[100].attr2 = ATTR2_TILEID((ones) * 4, (scoreAniState) * 4) | ATTR2_PALROW(0);
    // reset scoreAniState back to 3
    if (aniStateIncreased)
    {
        scoreAniState--;
    }
    if (tens > 7)
    {
        // set currFrame and aniState
        tens -= 8;
        scoreAniState++;
    }
    if (tens != 0)
    {
        shadowOAM[101].attr0 = 70 | ATTR0_SQUARE | ATTR0_4BPP;
        shadowOAM[101].attr1 = 187 | ATTR1_MEDIUM;
        shadowOAM[101].attr2 = ATTR2_TILEID((tens) * 4, (scoreAniState) * 4) | ATTR2_PALROW(0);
    }
}
