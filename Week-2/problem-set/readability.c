#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// Prototype
char *get_string(const char *statement);
int count_letter(const char *text);
int count_word(const char *text);
int count_sentence(const char *text);

int main()
{
    char *text = get_string("Text: ");
    // printf("%s\n", text);

    int letters = count_letter(text);
    printf("No of letter: %d\n", letters);

    int words = count_word(text);
    printf("No of words: %d\n", words);

    int sentences = count_sentence(text);
    printf("No of sentence: %d\n", sentences);

    float l = ((float)letters / words) * 100;
    float s = ((float)sentences / words) * 100;

    printf("L: %f\n", l);
    printf("S: %f\n", s);

    float index_float = 0.0588 * l - 0.296 * s - 15.8;
    // Error occuring in the round function.
    int index = round(index_float);
    printf("Index: %i\n", index);

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