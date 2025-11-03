#include<iostream>
using namespace std;

class student
{
    public:
    int id;
    string name;
    
    student(int id,string name)
    {
        this->id = id;
        this->name = name;
    }
    
    void display()
    {
        cout<<"Your id is: "<<id<<endl;
        cout<<"Your name is: "<<id<<endl;
        
    }
};
int main()
{
    int id1,id2;
    string name1,name2;
    
    cout<<"Enter id"<<endl;
    cin>>id1;
    
    cout<<"Enter name"<<endl;
    cin>>name1;
    
    cout<<"Enter id"<<endl;
    cin>>id2;
    
    cout<<"Enter name"<<endl;
    cin>>name2;
    
    student s1 = student(id1,name1);
    student s2 = student(id2,name2);
    
    s1.display();
    s2.display();
    
    return 0;
}