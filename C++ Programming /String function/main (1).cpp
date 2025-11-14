#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string text;

    cout << "Enter a sentence: ";
    getline(cin, text);

    cout << "You entered: " << text << endl;

    // find()
    int pos = text.find("hello");

    if(pos != string::npos)
        cout << "Found 'hello' at position: " << pos << endl;
    else
        cout << "'hello' not found" << endl;

    // replace()
    text.replace(0, 5, "Hi");
    cout << "After replace: " << text << endl;

    return 0;
}
