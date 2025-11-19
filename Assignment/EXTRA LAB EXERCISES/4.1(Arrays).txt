#include<stdio.h>

int main()
{
    int arr[10], i, j, temp;
    int max, min;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = min = arr[0];

    // Find max and min
    for (i = 1; i < 10; i++) 
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("\nMaximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    // --------- Sorting in ascending order ---------
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j]) 
            {
                // Swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nArray in ascending order:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
