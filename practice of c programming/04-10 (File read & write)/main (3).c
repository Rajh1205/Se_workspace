#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fp;
    fp = fopen("a.txt","r");
    char c;
    
    while((c=getc(fp))!=EOF)
    {
        printf("%c",c);
    }
    
    fclose(fp);
    
    getch();
}