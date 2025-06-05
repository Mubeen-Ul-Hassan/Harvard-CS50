#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char numbers[20];
} person;

int main()
{
    person people[3];

    strcpy(people[0].name, "David");
    strcpy(people[0].numbers, "+19348294");

    strcpy(people[1].name, "John");
    strcpy(people[1].numbers, "+1925489");

    strcpy(people[2].name, "dYaliia");
    strcpy(people[2].numbers, "+1039841");

    char search_name[] = "David";
    int found = 0;

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, search_name) == 0)
        {
            printf("Found %s\n", people[i].numbers);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Not found.\n");
        return 1;
    }

    return 0;
}
