#include<stdio.h>
#include<stdlib.h>  // for rand(), srand()
#include<time.h>    

int main()
{
    int userinput;
    int luckynum;
    int maxtries = 5;
    int tries = 0;

    srand(time(0));
    luckynum = (rand() % 100) + 1;  

    printf("Lucky Number (for testing): %d\n", luckynum);
    printf("Enter Lucky Number between 1 to 100\n");

    while (tries < maxtries)
    {
        printf("Attempt %d: ", tries + 1);
        scanf("%d", &userinput);
        tries++;

        if (userinput == luckynum)
        {
            printf("🎉 Congratulations! You guessed the number correctly!\n");
            break;
        }
        else if (userinput < luckynum)
        {
            printf("Try with a higher number.\n");
        }
        else
        {
            printf("Try with a lower number.\n");
        }
    }

    if (tries == maxtries && userinput != luckynum)
    {
        printf("\nMaximum tries (%d) reached. Game Over!\n", maxtries);
        printf("The lucky number was: %d\n", luckynum);
    }

    return 0;
}
