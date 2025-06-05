#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Prototype
int get_int(char *statement);
char *get_string(char *statement);
void print(char *statement);

int main(int argc, char *argv[])
{
    int no_of_voters = get_int("Number of voters: ");

    char *candidate1 = argv[1]; // ALice
    char *candidate2 = argv[2]; // Bob
    char *candidate3 = argv[3]; // Charlie

    int candidate_score[3] = {0, 0, 0};

    char *
        user_candidate;
    for (int i = 0; i < no_of_voters; i++)
    {
        user_candidate = get_string("Vote: ");

        if (strcmp(user_candidate, candidate1) == 0)
        {
            candidate_score[0]++;
        }
        else if (strcmp(user_candidate, candidate2) == 0)
        {
            candidate_score[1]++;
        }
        else if (strcmp(user_candidate, candidate3) == 0)
        {
            candidate_score[2]++;
        }
        free(user_candidate);
    }

    return 0;
}

int get_int(char *statement)
{
    int num;
    printf("%s", statement);
    scanf("%i", &num);

    return num;
}

char *get_string(char *statement)
{
    char *string = malloc(10 * sizeof(char));
    printf("%s", statement);
    scanf("%s", string);

    return string;
}

void print(char *statement)
{
    printf("%s\n", statement);
}