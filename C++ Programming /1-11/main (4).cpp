#include <iostream>
using namespace std;

class A
{
   public:
   void a()
   {
       cout<<"A Called"<<endl;
   }
};

class B 
{
   public:
   void b()
   {
       cout<<"B Called"<<endl;
   }
};

class C  : public A
{
   public:
   void c()
   {
       cout<<"C Called"<<endl;
   }
};


class D : public B,C
{
   public:
   void d()
   {
       cout<<"D Called"<<endl;
       D d1;
       d1.b();
       d1.c();
       d1.a();
       
   }
};




int main()
{
  
    D d1;
    d1.d();
   
    return 0;
}