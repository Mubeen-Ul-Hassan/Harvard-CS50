#include <stdio.h>

int get_int(const char statement[])
{
    static int num;
    printf("%s", statement);
    scanf("%d", &num);

    return num;
}

int main()
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x > y)
    {
        printf("x is greater than y. \n");
    }
    else if (x < y)
    {
        printf("x is less than y. \n");
    }
    else
    {
        printf("x and y are equal. \n");
    }

    return 0;
}