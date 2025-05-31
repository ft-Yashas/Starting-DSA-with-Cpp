#include<iostream>                         //print the factorial of a number using functions
using namespace std;


long long fact(long long n)
{
    long long x = 1;
    for(int i=1; i<=n ;i++)
    {
        x=x*i;
    }
    return x;
}

int main()
{
    long long n;
    cout<<"Enter N:";
    cin>>n;
    cout<<fact(n);
    return 0;
}