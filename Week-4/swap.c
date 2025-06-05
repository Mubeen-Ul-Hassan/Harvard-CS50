#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Prototype
void swap(int *a, int *b);

int main(void)
{
    int a = 1;
    int b = 2;

    printf("Value of a: %d and b: %d\n", a, b);
    swap(&a, &b);
    printf("Value of a: %d and b: %d\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}