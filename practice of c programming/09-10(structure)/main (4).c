#include<stdio.h>
#include<conio.h>

struct student
{
    int id;
    char name[20];
}r1;

void main()
{
    printf("Enter id: ");
    scanf("%d",&r1.id);
    
    printf("Enter name: ");
    scanf("%s",r1.name);
    
    printf("\n Your id is %d" "\n Your name is %s",r1.id,r1.name );
    
    getch();
}