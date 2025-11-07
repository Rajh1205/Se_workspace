#include<iostream>
using namespace std;

class Account
{
    public:
    int accno;
    string name;
    static int count;
    
    Account(int accno,string name)
    {
        this->accno = accno;
        this->name = name;
        count++;
    }
    void display()
    {
        cout<<accno<<" "<<name<<endl;
    }
};

int Account::count=0;
int main()
{
    Account a1 = Account(101,"Raj");
    Account a2 = Account(102,"Karan");
    
    a1.display();
    a2.display();
    
    return 0;
}