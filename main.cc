#include <iostream>

using namespace std;

const int SIZE = 8;

int board[SIZE][SIZE];

int rowMove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int colMove[8] = {1, 2, 2, 1, -1, -2, -2, -1};

bool isSafe(int row, int col)
{
    return (row >= 0 &&
            row < SIZE &&
            col >= 0 &&
            col < SIZE &&
            board[row][col] == 0);
}

bool knightTour(int row, int col, int moveCount)
{
    if (moveCount == 65)
        return true;

    for (int i = 0; i < 8; i++)
    {
        int nextRow = row + rowMove[i];
        int nextCol = col + colMove[i];

        if (isSafe(nextRow, nextCol))
        {
            board[nextRow][nextCol] = moveCount;

            if (knightTour(nextRow, nextCol, moveCount + 1))
                return true;

            board[nextRow][nextCol] = 0;
        }
    }

    return false;
}

void printBoard()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << board[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            board[i][j] = 0;
        }
    }

    board[0][0] = 1;

    if (knightTour(0, 0, 2))
    {
        cout << "Knight's Tour Solution:" << endl;
        printBoard();
    }
    else
    {
        cout << "No solution exists." << endl;
    }

    return 0;
}