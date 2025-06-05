#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char s[] = "mubeen";

    // Allocate memory for new string.
    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    // Copy string into memory.
    /*
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            t[0] = s[0];
        }
    */

    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free memory.
    free(t);
    return 0;
}