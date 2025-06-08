#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 9
typedef char *string;

typedef struct
{
    string name;
    int votes;
} candidate;

candidate candidates[MAX];
int candidate_count;

bool vote(string name);
int get_int(const char *statement);
char *get_string(char statement[]);
void print_winner(void);

int main(int argc, string argv[])
{
    // check if command line argument was inputted
    if (argc < 2)
    {
        printf("Usage: ./plurality [candidate...]\n");
        return 1;
    }

    //-1 bcos argv[0] is ./plurality
    candidate_count = argc - 1;

    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i \n", MAX);
        return 2;
    }

    // add names into list

    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    // get number of votes from user
    int vote_count = get_int("Number of votes: ");

    // for every int vote_count, get a vote
    for (int i = 0; i < vote_count; i++)
    {
        // get vote from user
        string name = get_string("Vote: ");

        // wrong input
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }
    // print the winner/(s)
    print_winner();
}

bool vote(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}

void print_winner(void)
{
    int max_votes = 0;

    // Find highest number of votes.
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > max_votes)
        {
            max_votes = candidates[i].votes;
        }
    }

    // Print winner.
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == max_votes)
        {
            printf("%s \n", candidates[i].name);
        }
    }

    return;
}

int get_int(const char *statement)
{
    int userNum;
    printf("%s", statement);
    scanf("%d", &userNum);

    return userNum;
}

char *get_string(char statement[])
{
    static char userInput[100];
    printf("%s ", statement);
    scanf("%99s", userInput); // Read string upto 99 characters.

    return userInput;
}