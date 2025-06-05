#include <stdio.h>

void draw(int height);

int main(void)
{
    int height = 4;
    draw(height);

    return 0;
}

void draw(int height)
{
    if (height == 0)
    {
        return;
    }

    draw(height - 1);

    for (int i = 0; i < height; i++)
    {
        printf("#");
    }
    printf("\n");
}