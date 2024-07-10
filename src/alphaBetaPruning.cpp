#include <functional>
#include "alphaBetaPruning.h"
#include "board.h"

int bestMove(symbol *board, symbol sign, std::function<int(int, int)> scoreCalculator)
{
    symbol tempBoard[BOARD_SIZE];

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        tempBoard[i] = board[i];
    }
}