#include <stdio.h>

int main(void)
{
    int arr[] = {3, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int elem = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[elem] > arr[j])
            {
                elem = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[elem];
        arr[elem] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}