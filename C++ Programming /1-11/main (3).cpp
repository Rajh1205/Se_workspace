#include<iostream>
using namespace std;

class A
{
    public:
    void a()
    {
        cout<<"A Called"<<endl;
    }
};

class B 
{
    public:
    void b()
    {
        cout<<"B Called"<<endl;
    }
};

class C : public A,B
{
    public:
    void display()
    {
        C c1;
        
        c1.a();
        c1.b();
    }
};

int main()
{
    C c1;
    c1.display();
    
    return 0;
}