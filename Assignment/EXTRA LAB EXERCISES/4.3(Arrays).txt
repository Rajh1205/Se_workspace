#include<stdio.h>

int main()
{
    int n, i;
    int sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  

   
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (i = 0; i < n; i++) 
    {
        sum += arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    // Display results
    printf("\nSum of the array elements = %d\n", sum);
    printf("Average of the array elements = %.2f\n", average);

    return 0;
}
