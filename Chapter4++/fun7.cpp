#include<iostream>           //calculate nCr binomial factorial for n&r (formula = n!/r!*(n-r)!)
using namespace std;

double fact(double n)
{
    double s=1;
    for(int i=1;i<=n;i++)
    {
        s=s*i;
    }
    return s;
}

double ncr(double n, double r)
{
    double x=fact(n)/(fact(r)*fact(n-r));
    return x;
}

int main()
{
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;

    cout<<"The nCr value = "<<ncr(n,r)<<endl;
    return 0;
}