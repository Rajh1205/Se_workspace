#include<iostream>
using namespace std;

// Base class
class Data
{
protected:
    int a, b;
public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
};

// class 1 (Single Inheritance)
class Multiply : public Data
{
protected:
    int Answer;
public:
    void calculateAnswer()
    {
        Answer = a * b;
    }
};

// class 2 (Hierarchical Inheritance)
class Display
{
public:
    void showMessage()
    {
        cout << "Performing multiplication using hybrid inheritance..." << endl;
    }
};

// class 3 (Hybrid Inheritance)
class Result : public Multiply, public Display
{
public:
    void showResult()
    {
        cout << "The multiplication of " << a << " and " << b << " is: " << Answer << endl;
    }
};

int main()
{
    Result ans;
    ans.showMessage();
    ans.getData();
    ans.calculateAnswer();
    ans.showResult();

    return 0;
}
