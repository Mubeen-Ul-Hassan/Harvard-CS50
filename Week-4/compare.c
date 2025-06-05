#include <stdio.h>
#include <string.h>

int main(void)
{
    char i[] = "Mubeen";
    char j[] = "Mubeen";

    if (strcmp(i, j) == 0)
    {
        printf("Values are same.\n");
    }
    else
    {
        printf("Values are different.\n");
    }

    return 0;
}