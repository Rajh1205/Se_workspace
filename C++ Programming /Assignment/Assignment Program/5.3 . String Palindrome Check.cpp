#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string str;
    string reversedStr = "";

    cout << "Enter a string: ";
    cin >> str;

    // Create the reversed string
    for(int i = str.length() - 1; i >= 0; i--) 
    {
        reversedStr += str[i];
    }

    // Check if original string and reversed string are the same
    if(str == reversedStr)
    {
        cout << str << " is a palindrome." << endl;
    } 
    else
    {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
