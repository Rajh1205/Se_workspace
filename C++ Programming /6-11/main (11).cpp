#include<iostream>
using namespace std;

class Rbi
{
    public:
    virtual int rate()
    {
        return 0;
    }
};

class Sbi : public Rbi
{
    public:
    int rate()
    {
        return 7;
    }
};

class Icici : public Rbi
{
    public:
    int rate()
    {
        return 8;
    }
};

class Axis : public Rbi
{
    public:
    int rate()
    {
        return 9;
    }
};

int main()
{
    Rbi * b;
    Sbi s;
    Icici i;
    Axis a;
    
    b = &s;
    cout<< b->rate()<<endl;
    
    b = &i;
    cout<< b->rate()<<endl;
    
    b = &a;
    cout<< b->rate()<<endl;
    
    
    return 0;
}




















