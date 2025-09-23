#include<stdio.h>
#include<conio.h>

int main()
{
    int size;
    printf("Enter size of the subjects: ");
    scanf("%d",&size);
    
    int marks[size],total=0;
    float per;
    
    for(int i=0;i<size;i++)
    {
        printf("Enter the marks of subject %d:",i+1);
        scanf("%d",&marks[i]);
        
    }
    for(int i=0;i<size;i++)
    {
        total+=marks[i];
        
    }
    
    per = total/size;
    
    printf("\n your total marks = %d",total);
    printf("\n your percentage is %f",per);
    
    if(per>=35)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }
    
    return 0;
    
}