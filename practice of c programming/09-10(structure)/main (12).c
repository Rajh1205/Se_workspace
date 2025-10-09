#include<stdio.h>
#include<conio.h>
struct student
{
    int id;
    char name[10];
    
}st[50];

void main()
{
    int i,num;
    printf("Enter Number of students: ");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
        printf("Enter id: ");
        scanf("%d",&st[i].id);
        
        printf("Enter name: ");
        scanf("%s",&st[i].name);
    }
    
    for(i=0;i<num;i++)
    {
        printf("\n Your id is %d",st[i].id);
        printf("\n Your name is %s",st[i].name);
    }
    
    getch();
}