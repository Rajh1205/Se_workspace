#include<stdio.h>
#include<time.h>

// Recursive function to find nth Fibonacci number
int fibonacci_recursive(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Iterative function to find nth Fibonacci number
int fibonacci_iterative(int n) 
{
    if (n == 0) return 0;
    int a = 0, b = 1, c, i;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int N, i;
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    printf("\nFibonacci sequence using recursion:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");

    printf("\nFibonacci sequence using iteration:\n");
    for (i = 0; i < N; i++) 
    {
        printf("%d ", fibonacci_iterative(i));
    }
    printf("\n");

    // Calculate Nth Fibonacci number and compare efficiency
    int nth = N - 1;

    clock_t start, end;

    start = clock();
    int fib_rec = fibonacci_recursive(nth);
    end = clock();
    double time_rec = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    int fib_itr = fibonacci_iterative(nth);
    end = clock();
    double time_itr = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nNth Fibonacci number (N=%d):\n", N);
    printf("Recursive: %d (Time: %.6f sec)\n", fib_rec, time_rec);
    printf("Iterative: %d (Time: %.6f sec)\n", fib_itr, time_itr);

    return 0;
}
