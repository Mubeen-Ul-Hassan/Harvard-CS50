#include <string.h>
#include <stdio.h>
#include <ctype.h>

// Prototype
char *get_string(char *statement);

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    printf("%s, %s", name, number);
    fprintf(file, "%s, %s\n", name, number);
    fclose(file);

    return 0;
}

char *get_string(char *statement)
{
    char *input;
    printf("%s", statement);
    scanf("%s", input);
    return input;
}