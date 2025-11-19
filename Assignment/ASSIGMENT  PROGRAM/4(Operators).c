#include<stdio.h>

int main()
{
    int a, b;

   
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition (a + b)       = %d\n", a + b);
    printf("Subtraction (a - b)    = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);

    if (b != 0)
        printf("Division (a / b)       = %d\n", a / b);
    else
        printf("Division (a / b)       = Undefined (division by zero)\n");

    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("a > b   : %d\n", a > b);
    printf("a < b   : %d\n", a < b);
    printf("a == b  : %d\n", a == b);
    printf("a != b  : %d\n", a != b);
    printf("a >= b  : %d\n", a >= b);
    printf("a <= b  : %d\n", a <= b);

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("(a && b)  : %d\n", (a && b)); // true if both non-zero
    printf("(a || b)  : %d\n", (a || b)); // true if any non-zero
    printf("!a        : %d\n", !a);       // true if a is zero

    return 0;
}
