#include<iostream>
using namespace std;

float division(int a,int b)
{
    if( b==0 )
    {
        throw "Attempted to divide by zero!";
    }
  return (a/b);  
};

int main()
{
    try
    {
        cout<<division(20,5);
    }
    catch(const char* e)
    {
        cerr<<e<<endl;
    }
    
    return 0;
}
