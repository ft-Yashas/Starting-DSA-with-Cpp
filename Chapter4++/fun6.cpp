#include<iostream>          // sum of digits of a number
using namespace std;

int fun(int n)
{
    int ds=0;
    while(n>0)
    {
        int ld = n%10;
        n=n/10;
        ds= ds+ld;
    }
    return ds;
}

int main()
{
    int n;
    cout<<"Enter N:";
    cin>>n;
    cout<<"Sum of Digits = "<<fun(n)<<endl;
    return 0;
}