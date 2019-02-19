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
#define BALLCOUNT 5

// variables
extern BALL balls[BALLCOUNT];
extern int ballsRemaining;

// prototypes
void initGame();
void updateGame();
void drawGame();
void initBalls();
void updateBall(BALL *);
void drawBall(BALL *);
int collision(int, int, int, int, int, int, int, int);
void updateBottomPaddlePosition();
void updateTopPaddlePosition();