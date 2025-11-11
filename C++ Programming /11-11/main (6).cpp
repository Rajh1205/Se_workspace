#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[100];
    
    ofstream outfile;
    outfile.open("test1.txt");
    
    cout<<"Enter your name: ";
    cin>>data;
    
    outfile<<data<<endl;
    outfile.close();
    
    ifstream infile;
    infile.open("test1.txt");
    infile>>data;
    cout<<data<<endl;
    infile.close();
    
    return 0;
}