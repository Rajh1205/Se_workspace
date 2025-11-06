#include<iostream>
using namespace std;

class calculation
{
    public:
    int cal(int a, int b)
    {
        return a+b;
        
    }
    int cal(int c, int d,int e)
    {
        return c*d*e;
    }
};

int main()
{
    calculation c1;
    
    cout<<c1.cal(6,10)<<endl;
    cout<<c1.cal(6,10,5)<<endl;

    return 0;
}