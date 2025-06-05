#include <stdio.h>
#include <string.h>

int main()
{
    char input[] = "software";
    printf("Before: %s\n", input);
    printf("After: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (input[i] >= 'a' || input[i] <= 'z')
        {
            // Changes input[i] to uppercase
            // input[i] - ('a' - 'A')
            printf("%c", input[i] - 32);
        }
        else
        {
            printf("%c", input[i]);
        }
    }
    printf("\n");

    return 0;
}