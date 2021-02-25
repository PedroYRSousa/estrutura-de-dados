#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE_ARRAY = 10;
void update(int *v, int index, int value);
void forEach(int *v);

int main()
{
    int *v = (int *)malloc(MAX_SIZE_ARRAY * sizeof(int));
    update(v, 0, 10);
    forEach(v);

    return 0;
}

void update(int *v, int index, int value)
{
    v[index] = value;
}
void forEach(int *v)
{
    for (int index = 0; index < MAX_SIZE_ARRAY; index++)
    {
        printf("v[%d]: %d ", index, v[index]);
        printf("-> &%x\n", &v[index]);
    }
}