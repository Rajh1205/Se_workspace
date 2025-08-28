#include <stdio.h>
#include <conio.h>

void main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num > 0) 
    {
        printf("Given number is positive: %d", num);
    }
    else 
    {
        printf("Given number is negative: %d", num);
    }

    getch(); 
}
