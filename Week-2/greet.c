#include <stdio.h>

int main(int argc, char argv[])
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[2]);
    }
    else
    {
        printf("Hello, world\n");
    }

    return 0;
}