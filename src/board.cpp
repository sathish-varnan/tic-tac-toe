#include <cstdlib>
#include "board.h"

void makeBoardEmpty(symbol **board)
{
    for (int i = 0; i < BOARD_ROW; i++)
    {
        for (int j = 0; j < BOARD_COL; j++)
        {
            board[i][j] = symbol::N;
        }
    }
}

void initializeBoard(symbol **board)
{
    board = (symbol **)malloc(BOARD_ROW * sizeof(symbol *));
    for (int i = 0; i < BOARD_ROW; i++)
    {
        board[i] = (symbol *)malloc(BOARD_COL * sizeof(symbol));
    }
    makeBoardEmpty(board);
}

void resetBoard()
{
    makeBoardEmpty(board);
}

void updateBoard(symbol **board, position POS, symbol sign)
{
    board[POS.x][POS.y] = sign;
}

void printBoard(symbol **board)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << board[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}