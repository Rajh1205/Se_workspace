#include<stdio.h>

void reverseString(char str[])
 {
    int i = 0, j = 0;
    char temp;

    // Find length manually
    while (str[j] != '\0') 
    {
        j++;
    }
    j--;  // point to last character

    // Swap characters
    while (i < j) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // read full line including spaces

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
