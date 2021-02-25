#include <stdio.h>
#include <stdlib.h>

const int SIZE_ROW = 10;
const int SIZE_COLUMN = 5;

int main()
{
    int **m = (int **)malloc(SIZE_ROW * sizeof(int *));
    for (int rows = 0; rows < SIZE_ROW; rows++)
        m[rows] = (int *)malloc(SIZE_COLUMN * sizeof(int));

    return 0;
}