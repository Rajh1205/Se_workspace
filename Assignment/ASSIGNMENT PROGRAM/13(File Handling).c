#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    
    fp = fopen("example.txt", "w");   
    if (fp == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter a string to write into the file: ");
    scanf("%s", text);   // Read full line including spaces

    fprintf(fp, "%s", text); // Write into file
    fclose(fp);              // Close file after writing

    // Reading from file
    fp = fopen("example.txt", "r");   
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nContents of the file:\n");

    while (fgets(text, sizeof(text), fp) != NULL) 
    {
        printf("%s", text);
    }

    fclose(fp); 

    return 0;
}
