#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // read full line including spaces

    while (str[i] != '\0') 
    {
        char ch = str[i];

        if (isalpha(ch)) 
        {  
            // check if alphabet
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else
        {
            special++;
        }
        i++;
    }

    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
