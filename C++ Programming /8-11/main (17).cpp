#include<iostream>
using namespace std;

class Shape
{
    public:
    virtual void draw2()=0;
};

class Rectangle : public Shape
{
    public:
    void draw2()
    {
        
    }
    void draw()
    {
        cout<<"drawing rectangle..."<<endl;
    }
};
class Circle : public Shape
{
    public:
    void draw2()
    {
        
    }
    void draw()
    {
        cout<<"drawing Circle..."<<endl;
    }
};

int main()
{
    Rectangle rec;
    Circle cir;
    
    rec.draw();
    cir.draw();
    
    return 0;
}















