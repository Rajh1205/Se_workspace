#include<stdio.h>

int main()
{
    int n,sum=0,i=0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    tops:
    i++;
    sum+=i;
    
    if(i<n)
    {
        goto tops;
    }
    
    printf("Sum of all digits are: %d",sum);
    
    return 0;
}