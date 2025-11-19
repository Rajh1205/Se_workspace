#include<stdio.h>
#include<time.h>

// Recursive factorial function
unsigned long long factorial_recursive(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

// Iterative factorial function
unsigned long long factorial_iterative(int n)
{
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    clock_t start, end;
    double time_recursive, time_iterative;
    unsigned long long fact_rec, fact_itr;

    // Recursive factorial
    start = clock();
    fact_rec = factorial_recursive(num);
    end = clock();
    time_recursive = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Iterative factorial
    start = clock();
    fact_itr = factorial_iterative(num);
    end = clock();
    time_iterative = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Display results
    printf("\nFactorial of %d (Recursive) = %llu\n", num, fact_rec);
    printf("Time taken (Recursive) = %.6f sec\n", time_recursive);

    printf("\nFactorial of %d (Iterative) = %llu\n", num, fact_itr);
    printf("Time taken (Iterative) = %.6f sec\n", time_iterative);

    return 0;
}
