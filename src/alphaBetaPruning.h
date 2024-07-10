#include "board.h"

#ifndef ALPHA_BETA_PRUNE

#define ALPHA_BETA_PRUNE
#define INFINITY 1e9 + 7

int bestMove(symbol *board, symbol sign);

int minimum(int child1, int child2)
{
    return min(child1, child2);
}

int maximum(int child1, int child2)
{
    return max(child1, child2);
}

#endif