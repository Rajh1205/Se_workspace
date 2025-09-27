#include<stdio.h>

int main()
{
    int a[2][2], b[2][2], result[2][2];
    int i, j, k;
    char choice;

    do
    {
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                result[i][j] = 0;
            }
        }

        printf("\nEnter 2x2 Matrix A:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("\nEnter 2x2 Matrix B:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        // Matrix multiplication
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("\nResultant Matrix:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }

        printf("\nDo you want to solve more matrices (y/n): ");
        scanf(" %c", &choice);  // space before %c clears newline

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using the program!\n");
    return 0;
}

