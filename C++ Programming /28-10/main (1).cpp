#include<iostream>
using namespace std;
int main()
{
    int age =15;
    
    if(age>=18)
    {
        cout<<"\n Eligible for vote";
        
        //nested if
        if(age>=60)
        {
            cout<<"\n Senior Citizen";
        }
        else
        {
            cout<<"\n Young age";
        }
    }
    else
    {
        cout<<"Not Eligible to vote";
    }
    return 0;
}