#include <stdio.h>

int main();

int main()
{
    int myNumber = 10;
    int *pointerToInteger = &myNumber;

    printf("Address of myNumber variable: %x\n", &myNumber);
    printf("Address stored in pointerToInteger variable: %x\n", pointerToInteger);
    printf("Value of myNumber variable: %d\n", *pointerToInteger);

    return 0;
}