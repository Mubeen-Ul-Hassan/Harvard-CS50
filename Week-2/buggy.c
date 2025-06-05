#include <stdio.h>

int get_int(const char *statement);
void print_column(int num);

int main(void)
{
    int h = get_int("Hieght: ");
    print_column(h);
    return 0;
}

int get_int(const char *statement)
{
    int num;
    printf("%s", statement);
    scanf("%d", &num);

    return num;
}

void print_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}