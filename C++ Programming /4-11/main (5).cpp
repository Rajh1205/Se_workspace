#include<iostream>
using namespace std;

class shape
{
    public:
    int a,b;
    
    void shapedata(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
};

class rectangle : public shape
{
    public:
    int arearec()
    {
        return a*b;
        
    }
};

class triangle : public shape
{
    public: 
    int areatri()
    {
        return 0.5*a*b;
    }
};

int main()
{
    
    rectangle rec;
    triangle tri;
    
    rec.shapedata(3,2);
    tri.shapedata(4,4);
    
    cout<<"Area of Rectangle is : "<<rec.arearec()<<endl;
    cout<<"Area of Triangle is : "<<tri.areatri()<<endl;
    
    return 0;
}

































