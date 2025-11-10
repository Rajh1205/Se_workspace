#include<iostream>
using namespace std;

struct Shape
{
    int width,height;
};

int main()
{
    struct Shape s;
    
    s.width=20;
    s.height=30;
    
    cout<<"Value is"<<s.width*s.height<<endl;
    
    return 0;
}