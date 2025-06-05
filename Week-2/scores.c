// Average three number using an array, a constant, and a helper function.

#include <stdio.h>

// Constant
const int N = 3;

// Prototype
int get_num(const char *statement);
float average(int length, int array[]);

int main(void)
{

    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_num("Score: ");
    }

    // Print average
    printf("Average: %f", average(N, scores));

    return 0;
}

int get_num(const char *statement)
{
    // Take integer input
    int num;
    printf("%s", statement);
    scanf("%d", &num);

    return num;
}

float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[0];
    }

    return (float)sum / length;
}