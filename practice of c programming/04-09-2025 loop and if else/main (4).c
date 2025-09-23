#include<stdio.h>
#include<conio.h>

int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==5)
        {
            continue;//if want to break the program from 5 than write break 
        }
        
        printf("\n %d",i);
        
    }
    
    return 0;
}