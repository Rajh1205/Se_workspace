#include<iostream>
using namespace std;

class Bank
{
    public:
    void bank()
    {
        cout<<"banking"<<endl;
    }
};

class Current : public Bank
{
    public:
    void current()
    {
        cout<<"current"<<endl;
        
    }
};
class Save : public Bank
{
    public:
    void save()
    {
        cout<<"saving"<<endl;
    }
};

int main()
{
    Current c1;
    Save s1;
    
    c1.current();
    s1.save();
    c1.bank();
    
    return 0;
    
}