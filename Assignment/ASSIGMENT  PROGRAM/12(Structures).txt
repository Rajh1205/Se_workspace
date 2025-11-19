#include<stdio.h>
#include<conio.h>

struct Student 
{
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    struct Student s[3]; 

    
    for (int i = 0; i < 3; i++) 
    {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    // Display details
    printf("----- Student Details -----\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    return 0;
}
