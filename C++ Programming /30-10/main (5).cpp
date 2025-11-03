#include<iostream>
using namespace std;

class student
{
    public:
    int id=1001;
    string name="tops";
    
    student(int id,string name)
    {
        this->id = id;
        this->name = name;
    }
    
    void display()
    {
        cout<<"Your id is: "<<id<<endl;
        cout<<"Your name is: "<<name<<endl;
    }
};
int main()
{
    student s1 =student(101,"a");
    student s2 =student(102,"b");
    
    s1.display();
    s2.display();
    
    return 0;
}