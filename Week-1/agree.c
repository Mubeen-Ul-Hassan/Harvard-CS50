#include <stdio.h>

char get_char(const char *statement)
{
    char letter;
    printf("%s", statement);
    scanf("%c", &letter);

    return letter;
}

int main()
{
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed. \n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed. \n");
    }
    else
    {
        printf("Invalid input.");
    }

    return 0;
}