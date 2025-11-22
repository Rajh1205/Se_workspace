#include<stdio.h>

int main()
 {
    int i;

    printf("Using break statement:\n");
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;  // Stop the loop when i becomes 5
        }
        printf("%d", i);
    }

    return 0;
}
