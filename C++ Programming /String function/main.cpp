#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "Raj";

    cout << "String 1: " << s1 << endl;
    cout << "String 2: " << s2 << endl;

    // length()
    cout << "Length of s1: " << s1.length() << endl;

    // append()
    string s3 = s1.append(s2);
    cout << "After append: " << s3 << endl;

    // substr()
    cout << "Substring (0 to 3): " << s1.substr(0, 3) << endl;

    // compare()
    if(s1.compare(s2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    return 0;
}
