#include<stdio.h>

int main() 
{
    int num, i, j, flag;

    printf("Enter a number: ");
    scanf("%d", &num);

    // -------- Check if the number is prime --------
    if (num <= 1)
    {
        printf("%d is NOT a prime number.\n", num);
    } 
    else
    {
        flag = 0;
        for (i = 2; i <= num / 2; i++) 
        {
            if (num % i == 0) 
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d is a PRIME number.\n", num);
        else
            printf("%d is NOT a prime number.\n", num);
    }

    // -------- Print all prime numbers between 1 and num --------
    printf("\nPrime numbers between 1 and %d are:\n", num);

    for (i = 2; i <= num; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
