#include<stdio.h>

int main()
{
    int num, range, i;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Enter the range (e.g., enter 10 to print up to num*10): ");
    scanf("%d", &range);

    // Printing multiplication table
    printf("\nMultiplication Table of %d up to %d:\n", num, range);

    for (i = 1; i <= range; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
