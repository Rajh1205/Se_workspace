#include<iostream>
using namespace std;

class student
{
    public:
    int id;
    string name;
    
    void display()
    {
        cout<<id<<name<<endl;
    }
};

int main()
{
    student s1;
    student s2;
    student s3;
    student s4;
    student s5;
    
   /* s1.id=101;
    s1.name="Raj";
    
    s2.id=102;
    s2.name="Karan";
    
    s3.id=103;
    s3.name="Pratham";
    
    s4.id=104;
    s4.name="Dharini";
    
    s5.id=105;
    s5.name="Hetvi";*/
    
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    
   /* cout<<s1.id<<endl;
    cout<<s1.name<<endl;
    
    cout<<s2.id<<endl;
    cout<<s2.name<<endl;
    
    cout<<s3.id<<endl;
    cout<<s3.name<<endl;
    
    cout<<s4.id<<endl;
    cout<<s4.name<<endl;
    
    cout<<s5.id<<endl;
    cout<<s5.name<<endl;*/
    
    return 0;
    
    
    
    
    
    
    
    
    
    
}