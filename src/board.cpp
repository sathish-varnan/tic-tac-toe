#include <cstdlib>
#include "board.h"

void makeBoardEmpty(symbol *board)
{
    for (int index = 0; index < BOARD_SIZE; index++)
    {
        board[index] = symbol::N;
    }
}

symbol *initializeBoard(symbol *board)
{
    board = (symbol *)malloc(BOARD_SIZE * sizeof(symbol));
    makeBoardEmpty(board);
}

void resetBoard()
{
    makeBoardEmpty(board);
}

void updateBoard(symbol *board, int POS, symbol sign)
{
    board[POS] = sign;
}

void printBoard(symbol *board)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << board[i * 3 + j] << "\t";
        }
        std::cout << std::endl;
    }
}