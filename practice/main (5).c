#include<stdio.h>
#include<conio.h>

void main ()
{
    float intrest,roi=8.5;
    int pri=100000,n=6;
    
    intrest = pri*roi*n/100;
    
    printf("\n your intrest amount is %f",intrest);
    
    int finalamount = pri+intrest;
    
    printf("\n your finalamount is %d",finalamount);
    
    getch();
}