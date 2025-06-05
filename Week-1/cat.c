#include <stdio.h>

void meow(void);
void meowLoop(int n);
int get_int(const char *statement);

int main()
{
    // While Loop

    int i = 0;
    while (i < 3)
    {
        meow();
        i++;
    }

    printf("\n");

    // For Loop

    for (int i = 0; i < 3; i++)
    {
        meow();
    }

    printf("\n");

    meowLoop(3);

    // Do-While Loop

    int n;
    do
    {
        n = get_int("Number: ");
    } while (n < 1);

    return 0;
}

void meow(void) // no-input and no-output
{
    printf("meow \n");
}

void meowLoop(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("meow \n");
    }
}

int get_int(const char *statement)
{
    int userNum;
    printf("%s", statement);
    scanf("%d", &userNum);

    return userNum;
}