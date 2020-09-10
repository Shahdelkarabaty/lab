#include "function1.h"
bool isSafe(int board[N][N], int row, int col)
{
    int i, j;

    
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}
