#include<stdio.h>
#include<conio.h>

int main()
{
    char c;
    
    printf("Enter Character: ");
    scanf("%c",&c);
    
    if (c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U')
    {
        printf("It's a Vowel");
    }
    else
    {
        printf("It's a Consonant");
    }
    
    return 0;
}