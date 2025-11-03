#include<iostream>
using namespace std;

class student
{
    
    public:
    int id;
    string name;
    string city;
    
    //method
    void display()
    {
        cout<<id<<" "<<name<<" "<<city<<endl;
    }
    
};

int main()
{
    //object
    student s1;
    student s2;
    
    //value assign
    s1.id=101;
    s1.name="\n Raj";
    s1.city="\n Rajkot";
    
    s1.display();//method call
    
    s2.id=102;
    s2.name="\n Dharini";
    s2.city="\n Rajkot";
    
    s2.display();
    
    return 0;
}