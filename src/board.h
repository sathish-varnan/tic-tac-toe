#ifndef BOARD_MAPPER
#define BOARD_MAPPER
#define BOARD_ROW 3
#define BOARD_COL 3

enum class symbol
{
    X,
    O,
    N
};

struct position
{
    int x;
    int y;
}

void initializeBoard(symbol **board);
void resetBoard(symbol **board);
void updateBoard(symbol **board, position POS, symbol sign);
void printBoard(symbol **board);
#endif
