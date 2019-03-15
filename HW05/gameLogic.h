// generic struct for animated sprite
// note: animation sprite variables are as followed:
// aniCounter: used to count how many frames have passed
// curFrame: which frame of animation sprite is in (row in spritesheet)
// numFrames: the total number of frames
// aniState: which state of animation sprite is in (column in spritesheet)
//
typedef struct {
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
    int active;
} ANISPRITE;

// constants
#define ALIENCOUNT 24
#define BULLETCOUNT 5
#define ALIENBULLETCOUNT 5
#define HEARTCOUNT 3
#define PLAYERROW 140

// variables
extern ANISPRITE aliens[ALIENCOUNT];
extern int aliensRemaining;
extern ANISPRITE bullets[BULLETCOUNT];
extern ANISPRITE alienBullets[ALIENBULLETCOUNT];
extern ANISPRITE hearts[HEARTCOUNT];
extern int heartsRemaining;
extern int bottomAlienRow;
extern ANISPRITE player;

// game prototypes
void initGame();
void updateGame();
void drawGame();

// alien prototypes
void initAliens();
void drawAliens(ANISPRITE *);
void updateAliens(ANISPRITE *);

// player prototypes
void initPlayer();
void drawPlayer();
void updatePlayer();

// heart prototypes
void initHearts();
void drawHearts(ANISPRITE *);
void updateHearts(ANISPRITE *);

// bullet prototypes
void initBullets();
void drawBullets(ANISPRITE *);
void updateBullets(ANISPRITE *);
void fireBullet();

// alien bullet prototypes
void initAlienBullets();
void drawAlienBullets(ANISPRITE *);
void updateAlienBullets(ANISPRITE *);
void fireAlienBullet(ANISPRITE *);

int collision(int, int, int, int, int, int, int, int);
