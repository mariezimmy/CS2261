// generic struct for animated sprite
// note: animation sprite variables are as followed:
// aniCounter: used to count how many frames have passed
// curFrame: which frame of animation sprite is in (row in spritesheet)
// numFrames: the total number of frames
// aniState: which state of animation sprite is in (column in spritesheet)
//
typedef struct
{
    int row;
    int col;
    int rdel;
    int cdel;
    int width;
    int height;
    int aniCounter;
    int aniState;
    int prevAniState;
    int curFrame;
    int numFrames;
    int index;
    int active;
    int cheat;
    int left;
} ANISPRITE;

// constants
#define BOXCOUNT1 23
#define BOXCOUNT2 20
#define BOXCOUNT3 22

// variables
extern ANISPRITE boxes[BOXCOUNT1];
extern ANISPRITE boxes2[BOXCOUNT2];
extern ANISPRITE boxes3[BOXCOUNT3];
extern int numberOfPets;
extern int boxesRemaining;
extern ANISPRITE kitty;
extern ANISPRITE fish;

// game prototypes
void initLevel1();
void initLevel2();
void initLevel3();

void drawLevel1();
void drawLevel2();
void drawLevel3();

void updateLevel1();
void updateLevel2();
void updateLevel3();

// box prototypes
void initBoxes1();
void initBoxes2();
void initBoxes3();
void drawBoxes(ANISPRITE *);

// kitty prototypes
void initKitty1();
void initKitty2();
void initKitty3();
void drawKitty();
void updateKitty();

// fish prototypes
void initFish1();
void initFish2();
void initFish3();
void drawFish();

// number of pets prototypes
// TODO make sprites for number of pets (i.e. score)

int collision(int, int, int, int, int, int, int, int);
