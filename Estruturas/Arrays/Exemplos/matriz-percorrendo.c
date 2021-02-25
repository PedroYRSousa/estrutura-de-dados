#include <stdio.h>
#include <stdlib.h>

const int SIZE_ROW = 10;
const int SIZE_COLUMN = 5;

void update(int **m, int row, int column, int value);
void forEach(int **m);

int main()
{
    int **m = (int **)malloc(SIZE_ROW * sizeof(int *));
    for (int rows = 0; rows < SIZE_ROW; rows++)
        m[rows] = (int *)malloc(SIZE_COLUMN * sizeof(int));
    update(m, 0, 0, 10);
    forEach(m);
    return 0;
}

void update(int **m, int row, int column, int value)
{
    m[row][column] = value;
}
void forEach(int **m)
{
    for (int row = 0; row < SIZE_ROW; row++)
    {
        for (int column = 0; column < SIZE_COLUMN; column++)
        {
            printf("m[%d][%d]: %d ", row, column, m[row][column]);
            printf("-> &%x\n", &m[row][column]);
        }
    }
}