#include<stdio.h>
#include<conio.h>

void main()
{
    int Maths=99;
    int Physics=80;
    int English=85;
    int Gujrati=89;
    int Science=88;
    
    int totalMarks = Maths + Physics + English + Gujrati + Science;
    float Percentage = (totalMarks * 100.0) / 500;  
    
    printf("Total Marks = %d\n", totalMarks);
    printf("Percentage = %.2f%%", Percentage);  
    
    getch();
}