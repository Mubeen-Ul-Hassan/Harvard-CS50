#include <stdio.h>

void binary_search(int *arr, int size, int target_value);

int main()
{
    int arr[] = {

        1,
        2,
        3,
        4,
        5,
    };

    int n = sizeof(arr) / sizeof(arr[0]);

    int target_value = 3;
    binary_search(arr, n, target_value);

    return 0;
}

void binary_search(int *arr, int size, int target)
{
    int left = 0;
    int right = size - 1;

    int value_found = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (target == arr[mid])
        {
            printf("Value found at index %d\n.", mid);
            value_found = 1;
            break;
        }
        else if (target < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    if (!value_found)
    {
        printf("Value not found.\n");
    }
}