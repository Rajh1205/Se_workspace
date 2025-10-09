#include<stdio.h>
#include<conio.h>

struct address
{
    char city[50];
    int zip;
};
struct student
{
    char name[20];
    int age;
    struct address add;
}r1;

void main()
{
    int i,num;
    printf("Enter number of student: ");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
    printf("\n Enter name: ");
    scanf("%s",r1.name);
    
    printf("\n Enter age: ");
    scanf("%d",&r1.age);
    
    printf("\n Enter city: ");
    scanf("%s",r1.add.city);
    
    printf("\n Enter zipcode: ");
    scanf("%d",&r1.add.zip);
    
    printf("\n Your name is \t %s",r1.name);
    printf("\n Your age is \t %d",r1.age);
    printf("\n Your city is \t %s",r1.add.city);
    printf("\n your zipcode is %d",r1.add.zip);
    
    if(r1.age>=18)
    {
        printf("\n eligible for vote");
    }
    else
    {
        printf("\n not eligible for vote");
    }
    
    }
    getch();
}