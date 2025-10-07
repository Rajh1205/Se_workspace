#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b)
{
    int temp;
    
    printf("\n Before swapping value of a in function %d",*a);
    printf("\n Before swapping value of b in function %d",*b);
    
    temp = *a;
    *a = *b;
    *b = temp;
    
    printf("\n After swapping value of a in function %d",*a);
    printf("\n After swapping value of b in function %d",*b);
}

void main()
{
    int a=100;
    int b=200;
    
    printf("\n Before swapping value of a %d",a);
    printf("\n Before swapping value of b %d",b);
    
    swap(&a,&b);
    
    printf("\n Before swapping value of a %d",a);
    printf("\n Before swapping value of b %d",b);
    
    
    
    getch();
}