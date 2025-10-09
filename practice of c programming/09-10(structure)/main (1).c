#include<stdio.h>
#include<conio.h>

struct address
{
    char city[50];
    int zip;
};
struct student
{
  char name[50];
  int age;
  struct address add;
}s1;

void main()
{
    int i,num;
    printf("Enter the number of student: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    printf("\n Enter Name: ");
    scanf("%s",&s1.name);
    
    printf("\n Enter age: ");
    scanf("%d",&s1.age);
    
    printf("\n Enter city: ");
    scanf("%s",&s1.add.city);
    
    printf("\n Enter zip: ");
    scanf("%d",&s1.add.zip);
    
    printf("\n Name is %s",s1.name);
    printf("\n Age is %d",s1.age);
    printf("\n City is %s",s1.add.city);
    printf("\n Zipcode is %d",s1.add.zip);
    
    }
    
    
    getch();
}