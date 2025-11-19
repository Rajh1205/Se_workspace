#include<stdio.h>

/*
int main()
{
    int a, b, c;
    int largest, smallest;

    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Find largest
    if (a >= b && a >= c)
    {
        largest = a;
    } else if (b >= a && b >= c) 
    {
        largest = b;
    } else
    {
        largest = c;
    }

    // Find smallest
    if (a <= b && a <= c) 
    {
        smallest = a;
    } else if (b <= a && b <= c)
    {
        smallest = b;
    } else
    {
        smallest = c;
    }

    printf("Using if-else:\n");
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}
*/



int main()
{
    int a, b, c;
    int largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // ------ Find Largest ------
    switch ((a >= b) && (a >= c))
    {
        case 1:
            largest = a;
            break;
        case 0:
            switch (b >= c) 
            {
                case 1:
                    largest = b;
                    break;
                case 0:
                    largest = c;
                    break;
            }
    }

    // ------ Find Smallest ------
    switch ((a <= b) && (a <= c))
    {
        case 1:
            smallest = a;
            break;
        case 0:
            switch (b <= c) 
            {
                case 1:
                    smallest = b;
                    break;
                case 0:
                    smallest = c;
                    break;
            }
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}



