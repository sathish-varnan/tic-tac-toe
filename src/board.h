#ifndef BOARD_MAPPER
#define BOARD_MAPPER
#define BOARD_SIZE 9

enum class symbol
{
    X,
    O,
    N
};

symbol *initializeBoard(symbol *board);
void resetBoard(symbol *board);
void updateBoard(symbol *board, int POS, symbol sign);
void printBoard(symbol *board);
#endif