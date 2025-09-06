#include<stdio.h>
#include<conio.h>

int main()
{
    int num,FirstDigit, LastDigit, sum;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    LastDigit = num %10; // Get the lastdigit
    
    FirstDigit = num; // Get the firstdigit
    while(FirstDigit>=10)
    {
        FirstDigit = FirstDigit / 10;
    }
    
    sum = FirstDigit + LastDigit;
    
    printf("FirstDigit = %d \n",FirstDigit);
    printf("LastDigit = %d \n",LastDigit);
    printf("Sum of first and last digit = %d\n",sum);
    
    return 0;
}