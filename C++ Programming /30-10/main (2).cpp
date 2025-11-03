#include<iostream>
using namespace std;

class student
{
    
    public:
    int id;
    string name;
    string surname;
    student(int i,string n,string s)
    {
        id = i;
        name = n;
        surname = s;
    }
    void display()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<surname<<endl;
    }
};
int main()
{
    student s1 = student(101,"Raj","a");
    student s2 = student(102,"Karan","a");
    student s3 = student(103,"Pratham","a");
    student s4 = student(104,"Dharini","a");
    student s5 = student(105,"Hetvi","a");
    
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    
    
    return 0;
    
    
    
    
    
}