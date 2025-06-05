#include <stdio.h>
#include <stdbool.h> // Header file for booleans.

int main()
{
    long dollars = 1;

    while (true)
    {
        printf("Here's $%li. Double it and give it to the next person? ", dollars);
        char input;
        scanf(" %c", &input); // The space before %c tell the scanfs to skip any whitespace characters.

        if (input == 'y' || input == 'Y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }

    printf("Here's $%li. \n", dollars);

    return 0;
}