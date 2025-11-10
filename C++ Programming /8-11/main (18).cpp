#include<iostream>
using namespace std;

class Data
{
    private:
    int x,y,z;
    
    public:
    void add()
    {
        cout<<"Enter two number: ";
        cin>>x>>y;
        z=x+y;
        cout<<"Sum of two number is: "<<z<<endl;
    }
};

int main()
{
    Data d;
    d.add();
    
    return 0;
}