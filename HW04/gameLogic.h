// brick struct
typedef struct {
    int row;
    int col;
    int height;
    int width;
    unsigned short color;
    int active;
    int erased;
} BRICK;

// ball struct
typedef struct {
    int row;
    int col;
    int oldRow;
    int oldCol;
    int rdel;
    int cdel;
    int height;
    int width;
    unsigned short color;
    int active;
    int erased;
} BALL;

// constants
#define BRICKCOUNT 15
#define BALLCOUNT 3

// variables
extern BRICK bricks[BRICKCOUNT];
extern int bricksRemaining;
extern BALL balls[BALLCOUNT];

// prototypes
void initGame();
void updateGame();
void drawGame();
void initBricks();
void drawBricks(BRICK *);
void initBalls();
void updateBall(BALL *);
void drawBall(BALL *);
int collision(int, int, int, int, int, int, int, int);
