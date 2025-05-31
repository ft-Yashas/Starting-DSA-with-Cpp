#include<iostream>          ////Figure out a way to find out if n == power of 2 (without using loops)
using namespace std;

bool pNum(int n)
{
    if(n>0 && (n & (n-1))==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(pNum(n))
    {
        cout<<"Power of 2!!";
    }
    else
    {
        cout<<"No!";
    }
    cout<<endl;
    return 0;
}