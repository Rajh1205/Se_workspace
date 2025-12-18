#include<iostream>
using namespace std;

int main()
{

    // Variable declarations
    int a = 10;
    float b = 5.5;
    double c = 20.75;
    char ch = 'A';

    // Constant declaration
    const int FIXED_VALUE = 100;

    // Performing operations
    int sum = a + FIXED_VALUE;
    float result = b * 2;
    double total = c + a;

    // Displaying values
    cout << "Integer variable a = " << a << endl;
    cout << "Float variable b = " << b << endl;
    cout << "Double variable c = " << c << endl;
    cout << "Character variable ch = " << ch << endl;

    cout << "Constant FIXED_VALUE = " << FIXED_VALUE << endl;

    cout << "Sum of a and FIXED_VALUE = " << sum << endl;
    cout << "Result of b * 2 = " << result << endl;
    cout << "Total of c + a = " << total << endl;

    return 0;
}
