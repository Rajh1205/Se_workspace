#include<stdio.h>
#include<string.h>
#include<ctype.h>

// Function to check if a number is palindrome
int isNumberPalindrome(int num)
{
    int original = num, reverse = 0, digit;

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return (original == reverse);
}

// Function to check if a string is palindrome
int isStringPalindrome(char str[])
{
    int i = 0, j = strlen(str) - 1;
    while (i < j)
    {
        // Ignore case
        if (tolower(str[i]) != tolower(str[j]))
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main()
{
    int choice;
    printf("Choose option:\n1. Number palindrome\n2. String palindrome\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (isNumberPalindrome(num))
            printf("%d is a palindrome number.\n", num);
        else
            printf("%d is NOT a palindrome number.\n", num);

    } else if (choice == 2)
    {
        char str[100];
        printf("Enter a string: ");
        scanf(" %[^\n]", str);  // Read full line including spaces

        if (isStringPalindrome(str))
            printf("\"%s\" is a palindrome string.\n", str);
        else
            printf("\"%s\" is NOT a palindrome string.\n", str);

    } else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}
