#include<iostream>
using namespace std;

int main()
{

   
    int intNum = 10;
    float floatNum = intNum;   // int to float

    cout << "Implicit Type Conversion:" << endl;
    cout << "Integer value = " << intNum << endl;
    cout << "Float value (after conversion) = " << floatNum << endl;

    cout << endl;

    // implicit conversion
    char ch = 'A';
    int asciiValue = ch;   // char to int

    cout << "Character = " << ch << endl;
    cout << "ASCII value (implicit) = " << asciiValue << endl;

    cout << endl;

    // Explicit Type Conversion (Type Casting)
    float num1 = 5.75;
    int num2 = (int)num1;   // float to int

    cout << "Explicit Type Conversion:" << endl;
    cout << "Original float value = " << num1 << endl;
    cout << "Integer value (after casting) = " << num2 << endl;

    cout << endl;

    // Explicit conversion in expression
    int a = 5, b = 2;
    float result = (float)a / b;   // int to float

    cout << "Result of (float)a / b = " << result << endl;

    return 0;
}
