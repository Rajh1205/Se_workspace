#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 10;     
    int *ptr;          // pointer variable

    ptr = &num;        // storing address of num in ptr

    printf("Original value of num: %d\n", num);
    printf("Address of num (stored in ptr): %p\n", ptr);

    // Modify the value of num using pointer
    *ptr = 25;

    printf("Value of num after modification using pointer: %d\n", num);

    return 0;
}
