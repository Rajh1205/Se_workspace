#include<iostream>
using namespace std;

class A
{
    
  friend class B;
 
  private:
  int a=0;
  
  public:
  void PM()
  {
      cout<<a<<endl;
  }
};

class B
{
    public:
    void change(A&yourclass, int x)
    {
        yourclass.a = x;
    }
};

int main()
{
    A a;
    B b;
    a.PM();
    b.change(a,4);
    a.PM();
    
    return 0;
}