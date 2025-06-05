#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int scores[1024];

    for (int i = 0; i < 1024; i++)
    {
        printf("%d\n", scores[i]);
    }
    printf("\n");

    return 0;
}