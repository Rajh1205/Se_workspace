#include<iostream>
using namespace std;

class Data
{
    private:
    int x,y,z;
    
    public:
    void add()
    {
        cout<<"Enter two numbers: ";
        cin>>x>>y;
        z=x*y;
        cout<<"multiplication of two number is: "<<z<<endl;
    }
};
int main()
{
    Data d;
    d.add();
    
    return 0;
}