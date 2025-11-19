#include<stdio.h>

int main() 
{
    int i, j;
    int choice;

    printf("Matrix Calculator\n");
    printf("Choose operation:\n");
    printf("1. Add 2x2 matrices\n");
    printf("2. Add 3x3 matrices\n");
    printf("3. Multiply 3x3 matrices\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        int mat1[2][2], mat2[2][2], sum[2][2];

        printf("Enter elements of first 2x2 matrix:\n");
        for (i = 0; i < 2; i++)
            for (j = 0; j < 2; j++)
                scanf("%d", &mat1[i][j]);

        printf("Enter elements of second 2x2 matrix:\n");
        for (i = 0; i < 2; i++)
            for (j = 0; j < 2; j++)
                scanf("%d", &mat2[i][j]);

        // Matrix addition
        for (i = 0; i < 2; i++)
            for (j = 0; j < 2; j++)
                sum[i][j] = mat1[i][j] + mat2[i][j];

        printf("\nResultant Matrix (Addition):\n");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++)
                printf("%d ", sum[i][j]);
            printf("\n");
        }

    }
    else if (choice == 2) 
    {
        int mat1[3][3], mat2[3][3], sum[3][3];

        printf("Enter elements of first 3x3 matrix:\n");
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                scanf("%d", &mat1[i][j]);

        printf("Enter elements of second 3x3 matrix:\n");
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                scanf("%d", &mat2[i][j]);

        // Matrix addition
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                sum[i][j] = mat1[i][j] + mat2[i][j];

        printf("\nResultant Matrix (Addition):\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++)
                printf("%d ", sum[i][j]);
            printf("\n");
        }

    } 
    else if (choice == 3)
    {
        int mat1[3][3], mat2[3][3], product[3][3] = {0};

        printf("Enter elements of first 3x3 matrix:\n");
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                scanf("%d", &mat1[i][j]);

        printf("Enter elements of second 3x3 matrix:\n");
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                scanf("%d", &mat2[i][j]);

        // Matrix multiplication
        for (i = 0; i < 3; i++) 
        {
            for (j = 0; j < 3; j++) 
            {
                product[i][j] = 0;
                for (int k = 0; k < 3; k++)
                    product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }

        printf("\nResultant Matrix (Multiplication):\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++)
                printf("%d ", product[i][j]);
            printf("\n");
        }

    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}
