#include <stdio.h>

char *get_string(char statement[])
{
    static char userInput[100];
    printf("%s ", statement);
    scanf("%99s", userInput); // Read string upto 99 characters.

    return userInput;
};

int main()
{
    char *answer = get_string("What's your name?");
    printf("Hello, %s \n", answer);

    return 0;
}