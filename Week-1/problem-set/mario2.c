// Problem set 2
#include <stdio.h>

int get_int(const char *statement)
{
    int num;
    printf("%s", statement);
    scanf("%d", &num);

    return num;
}

void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--) // First half
        {
            if (i >= j)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }

        printf(" ");

        for (int j = 0; j < n; j++) // Second half
        {
            if (i >= j)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

int main()
{
    int n = get_int("Height: ");
    pyramid(n);

    return 0;
}