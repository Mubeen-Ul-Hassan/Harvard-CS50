#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

// Prototype
char *get_string(const char *statement);
int count_letter(const char *text);
int count_word(const char *text);
int count_sentence(const char *text);

int main()
{
    char *text = get_string("Text: ");

    int letters = count_letter(text);

    int words = count_word(text);

    int sentences = count_sentence(text);

    int l = (letters / words) * 100;
    int s = (sentences / words) * 100;
    int index = round(0.0588 * l - 0.296 * s - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }

    free(text);

    return 0;
}

char *get_string(const char *statement)
{
    char *text = malloc(100);
    printf("%s", statement);
    fgets(text, 100, stdin);

    text[strcspn(text, "\n")] = '\0';

    return text;
}

int count_letter(const char *text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }

    return count;
}

int count_sentence(const char *text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    if (count == 0 && count_word(text) > 0)
    {
        return 1;
    }
    return count;
}

int count_word(const char *text)
{
    int count = 0;
    int in_word = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isblank(text[i]))
        {
            if (!in_word)
            {
                count++;
                in_word = 1;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    return count;
}