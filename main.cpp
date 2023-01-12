#include <iostream>

using namespace std;
#define N 24
void copy(int M[][N], int M2[][N], int ROWS, int COLS)
{
    int r, c;
    M2[r][c] = M[r][c];
    cout << M2[r][c];
}

void print(int M[][N], int ROWS, int COLS)
{
    int r, c, row, col;
    row = 1;
    col = 1;
    M[row][col] = 2;
    for (r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            if (M[r][c] == 0)
            {
                cout << " ";
            }
            else if (M[r][c] == 1)
            {
                cout << "T";
            }
            else if (M[r][c] == 2)
            {
                cout << "*";
            }
            else
            {
                cout << M[r][c];
            }
        }

        cout << endl;
    }
}

void fill(int M[][N], int ROWS, int COLS, int row, int col)
{
    int r, c;
    for (r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            if (r == 0 || r == ROWS - 1)
            {
                M[r][c] = 0;
            }
            else if (c == 0 || c == COLS - 1)
            {
                M[r][c] = 0;
            }
            else
            {
                M[r][c] = 1;
            }
        }
    }
}

int main()
{
    int M[N / 2][N];
    int M2[N / 2][N];
    int ROWS, COLS;
    int r, c;
    ROWS = sizeof(M) / sizeof(M[0]);
    COLS = sizeof(M[0]) / sizeof(M[0][0]);
    fill(M, ROWS, COLS, 1, 1);
    print(M, ROWS, COLS);
    copy(M, M2, ROWS, COLS);

    return 0;
}
