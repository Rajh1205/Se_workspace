#include<iostream>
using namespace std;

class calculation
{
    public:
    int cal(int a, int b)
    {
        return a+b;
    }
    int cal(double a,double b)
    {
        return a*b;
    }

};

int main()
{
    calculation x1;
    
    cout<<x1.cal(5,2)<<endl;
    cout<<x1.cal(6.00,8.00)<<endl;
    
    return 0;
};