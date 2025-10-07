#include<stdio.h>
#include<conio.h>

struct student
{
    int id;
    char name[10];
}s1;

void main()
{
    printf("Enter id");
    scanf("%d",&s1.id);
    
    printf("Enter name");
    scanf("%s",&s1.name);
    
    printf("Your id is %d",s1.id);
    printf("Your name is %s",s1.name);
    
    getch();
    
}