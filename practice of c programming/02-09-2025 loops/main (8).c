#include<stdio.h>
#include<conio.h>

int main()
{
    int num,sum=0;
    
    printf("Enter num");
    scanf("%d",&num);//123//12

    while(num>0)
    {
        int rem = num % 10; //4//3//2//1
        sum+=rem;//0+4=4//4+3=7//7+2=9//9+1=10
        num=num/10;
    }
    printf("Sum of all digits are: %d",sum);
    
    return 0;
}