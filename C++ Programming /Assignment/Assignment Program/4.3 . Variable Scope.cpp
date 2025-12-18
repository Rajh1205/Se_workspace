#include<iostream>
using namespace std;

// Global variable
int globalVar = 100;

// Function to demonstrate local variable
void localExample() 
{
    int localVar = 50;  // Local variable
    cout << "Inside localExample() - Local variable: " << localVar << endl;
    cout << "Inside localExample() - Global variable: " << globalVar << endl;
}

// Function to modify global variable
void modifyGlobal()
{
    globalVar += 50;
    cout << "Inside modifyGlobal() - Global variable modified to: " << globalVar << endl;
}

int main()
{
    cout << "Inside main() - Global variable: " << globalVar << endl;

    // Calling function that uses local variable
    localExample();

    // Trying to access localVar here would cause an error
    // cout << localVar; // Uncommenting this will cause a compile-time error

    // Calling function that modifies global variable
    modifyGlobal();

    cout << "Inside main() after modifyGlobal() - Global variable: " << globalVar << endl;

    return 0;
}
