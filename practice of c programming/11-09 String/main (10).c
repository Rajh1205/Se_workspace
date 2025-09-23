#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char name[40];
    char surname[40];
    
    printf("Enter Your Name: ");
    scanf("%s",&name);
    
    printf("Enter Your surname: ");
    scanf("%s",&surname);
    
    printf("Your Full Name is :  %s",strcat(name,surname));
    
    return 0;
}