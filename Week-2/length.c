#include <stdio.h>

// Prototype
int string_length(const char *s);

int main(void)
{
    char name[] = "David";
    int length = string_length(name);

    printf("Length: %d\n", length);

    return 0;
}

int string_length(const char *s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }

    return n;
}