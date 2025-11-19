#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char sentence[200];
    int i = 0, word_count = 0;
    int max_length = 0, current_length = 0;
    char longest_word[50] = "", current_word[50] = "";

    printf("Enter a sentence: ");
    scanf(" %[^\n]", sentence);  // read full line including spaces

    while (sentence[i] != '\0')
    {
        if (!isspace(sentence[i]))
        {
            // Add character to current word
            current_word[current_length] = sentence[i];
            current_length++;
            current_word[current_length] = '\0';
        }

        if ((isspace(sentence[i]) || sentence[i+1] == '\0') && current_length > 0) 
        {
            // End of a word
            word_count++;

            // Check if this is the longest word
            if (current_length > max_length)
            {
                max_length = current_length;
                strcpy(longest_word, current_word);
            }

            // Reset current word
            current_length = 0;
        }

        i++;
    }

    printf("\nNumber of words: %d\n", word_count);
    printf("Longest word: %s (Length: %d)\n", longest_word, max_length);

    return 0;
}
