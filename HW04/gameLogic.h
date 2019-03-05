// brick struct
typedef struct {
    int row;
    int col;
    int height;
    int width;
    unsigned char colorIndex;
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
    unsigned char colorIndex;
    int active;
    int erased;
} BALL;

// constants
#define BRICKCOUNT 18
#define BALLCOUNT 4

// variables
extern BRICK bricks[BRICKCOUNT];
extern int bricksRemaining;
extern BALL balls[BALLCOUNT];
extern int ballsRemaining;


// prototypes
void initGame();
void updateGame();
void drawGame();
void initBricks();
void drawBrick(BRICK *);
void initBalls();
void initPaddles();
void updateBall(BALL *);
void drawBall(BALL *);
void updatePaddlePosition();
int collision(int, int, int, int, int, int, int, int);
