#include <stdio.h>

// Prototype
int get_int(const char *statement);

int main()
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n = get_int("Number: ");

    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < length; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found");
            return 0;
        }
    }

    printf("Not found.");
    return 1;
}

int get_int(const char *statement)
{
    int num;
    printf("%s", statement);
    scanf("%d", &num);

    return num;
}