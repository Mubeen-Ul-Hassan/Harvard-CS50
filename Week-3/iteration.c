#include <stdio.h>

// Prototype
void draw(int height);

int main(void)
{
    int height = 4;
    draw(height);

    return 0;
}

void draw(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (i >= j)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}