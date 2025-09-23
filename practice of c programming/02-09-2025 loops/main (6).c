#include<stdio.h>
#include<conio.h>

int main()
{
    int marks;
    
    //ERROR 
    
    printf("Enter the marks : ");
    scanf("%d",&marks);

    do
    {
      printf("Pass");
      
    }
    while(marks>=35);
    
    return 0;
}