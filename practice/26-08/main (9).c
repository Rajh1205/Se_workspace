#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, result;
    char op;

    printf("Enter equation (example: 5+3): ");
    scanf("%d%c%d", &a, &op, &b);   // input like 5+3

    switch(op)
    {
        case '+':
            result = a + b;
            printf("Result = %d", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %d", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %d", result);
            break;
        case '/':
            if(b != 0)
                printf("Result = %d", a / b);
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Invalid operator!");
    }

    getch();
}
