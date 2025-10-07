#include<stdio.h>
#include<conio.h>

void swap(int x, int y);

void main()
{
    int a=100;
    int b=200;
    
    printf("Before swapping vlaue of a %d",a);
    printf("Before swapping vlaue of b %d",b);
    
    swap(&a,&b);
    
    printf("After swapping vlaue of a %d",a);
    printf("After swapping vlaue of b %d",b);
    
    
    getch();
    
}

void swap(int *x, int *y)
{
    printf("Before swapping vlaue of a inside the function %d",*x);
    printf("Before swapping vlaue of b inside the function %d",*y);
    
    int temp;
    
    temp = *x;
    *x = *y;
    *y = *x;
    
    printf("After swapping vlaue of a inside the function %d",*x);
    printf("After swapping vlaue of b inside the function %d",*y);
}