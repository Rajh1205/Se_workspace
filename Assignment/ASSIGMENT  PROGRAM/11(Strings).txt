#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    strcat(str1, str2);   // Concatenate str2 into str1

    printf("\nConcatenated string: %s\n", str1);
    printf("Length of concatenated string: %d\n", strlen(str1));

    return 0;
}
