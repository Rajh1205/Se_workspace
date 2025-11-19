#include<stdio.h>

int main()
{
    int num, sum = 0, reverse = 0, temp, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;  

    while (temp != 0) 
    {
        digit = temp % 10;       // get last digit
        sum += digit;            // add to sum
        reverse = reverse * 10 + digit; // build reversed number
        temp /= 10;              // remove last digit
    }

    printf("Sum of digits of %d = %d\n", num, sum);
    printf("Reversed number of %d = %d\n", num, reverse);

    return 0;
}
