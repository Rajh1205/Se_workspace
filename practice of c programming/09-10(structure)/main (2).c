#include<stdio.h>
#include<conio.h>

struct address
{
    char city[50];
    int zip;
};
struct student
{
    char name;
    int age;
    struct address add;
}s1;

void main()
{
  struct student s1 = {"Raj Patel", 22,{"Rajkot",123456}};
  
  
  getch();
}