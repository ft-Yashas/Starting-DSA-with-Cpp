#include <iostream>                   //find all Arsmtrong numbers from 1 to 100000
#include <cmath>
using namespace std;


int noDigits(int n)
{
    int digits=0;
    while(n>0)
    {
        digits++;
        n=n/10;
    }
    return digits;
}


int armNo(int n)
{
    int x=0;
    int p=noDigits(n);
    while(n>0)
    {
        int remainder = n%10;
        n=n/10;
        x = x + pow(remainder, p);
    }
    return x;
}

int main()
{
    int n;
    cout<<"Enter N : ";
    cin>>n;
    for(int i=10 ; i<=n ; i++)
    {
        if(i==armNo(i))
        {
            cout<<i<<" ";
        }
        else
        {
            cout<<"";
        }
    }
    cout<<endl;
    return 0;
}