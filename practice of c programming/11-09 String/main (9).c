#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char ch[20];
    
    printf("Enter Your Name: ");
    scanf("%s",&ch);
    
    printf("Your length is : %d ",strlen(ch));
    printf("\nYour Name is : %s",ch);
    
    return 0;
}