#include<stdio.h>
#include<conio.h>

void main ()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
     
     if (year % 4 == 0)
     {
         printf(" enter year is leap year%d ",year);
         
     }
    else 
    {
        printf("enter year is not leap year%d",year);
    }
    
    
    
    getch();
}