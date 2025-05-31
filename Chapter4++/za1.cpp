#include<iostream>                     //Program to find all powers of 2 till n
using namespace std;

int pNum(int x)
{
    int m=2;
    for(int i=1; i<x; i++)
    {
        cout<<m<<" ";
        m*=2;
    }
    return m;
}

int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<pNum(n);
    cout<<endl;
    return 0;
}