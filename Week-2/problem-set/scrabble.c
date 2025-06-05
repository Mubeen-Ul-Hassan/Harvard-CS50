#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Prototype
char *get_string(const char *statement);
int your_score(char word[]);

int main(void)
{
    // Prompt the user for two words.
    char *word1 = get_string("Player 1: ");
    char *word2 = get_string("Player 2: ");

    // Compute the score of each word.
    int score1 = your_score(word1);
    int score2 = your_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    // Deallocate dynamically memory.
    free(word1);
    free(word2);

    return 0;
}

char *get_string(const char *statement)
{
    char *input = malloc(100);
    printf("%s", statement);
    scanf("%99s", input);

    return input;
}

int your_score(char word[])
{
    int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int score = 0;

    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (isalpha(word[i]))
        {
            int index = toupper(word[i]) - 'A';
            score += points[index];
        }
    }

    return score;
}