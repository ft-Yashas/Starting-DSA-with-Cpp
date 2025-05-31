#include<iostream>                //find if n==armstrong number(ex 153 = 1^3 + 5^3 + 3^3 = 153)
#include<cmath>
using namespace std;


int noDigits(long long n)
{
    int digits=0;
    while(n>0)
    {
        digits++;
        n=n/10;
    }
    return digits;
}

long long armstrongNumber(long long n)
{
    long long sum =0;
    double p= noDigits(n);
    while(n>0)
    {
        int remainder=n%10;
        n=n/10;
        sum=sum+ pow(remainder, p);
    }
    return sum;
}

int main()
{
    long long n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n==armstrongNumber(n))
    {
        cout<<"Armstrong Number!!";
    }
    else
    {
        cout<<"Not an Armstrong Number";
    }
    cout<<endl;
    return 0;
}