#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE_ARRAY = 10;
void update(int *v, int index, int value);

int main()
{
    int *v = (int *)malloc(MAX_SIZE_ARRAY * sizeof(int));
    update(v, 0, 10);

    return 0;
}

void update(int *v, int index, int value)
{
    v[index] = value;
}