#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    // Taking input from user
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    // Displaying output
    cout << "Hello, " << name << "! You are " << age << " years old.";

    return 0;
}
