#include <stdio.h>

int main()
{
    char name[] = "Mubeen";

    printf("name memory address: %p\n", &name);

    printf("\n");
    printf("%p\n", &name[0]);
    printf("%p\n", &name[1]);
    printf("%p\n", &name[2]);
    printf("%p\n", &name[3]);
    printf("%p\n", &name[4]);

    char *job = "Software Engineer";

    printf("\n\n");

    printf("%c\n", *job);
    printf("%c\n", *(job + 1));

    return 0;
}