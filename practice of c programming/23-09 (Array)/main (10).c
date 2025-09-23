#include<stdio.h>
#include<conio.h>

int main()
{
    int marks[5];
    
    marks[0]=86;
    marks[1]=76;
    marks[2]=96;
    marks[3]=57;
    marks[4]=46;
    
    for(int i=0;i<5;i++)
    {
        printf("\n %d",marks[i]);
    }
    
    return 0;
}