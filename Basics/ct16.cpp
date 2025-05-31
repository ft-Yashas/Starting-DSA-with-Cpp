#include<iostream>                        //find GCD(greatest commom divisor) and LCM(lowest common multiple) of a,b
using namespace std;

int gcd(int a, int b)
{
    while(b!=0)
    {
    int temp=b;
    b=a%b;
    a= temp;
    }
    return a;
}

int lcm(int a,int b)
{
    int x = (a*b)/gcd(a,b);
    return x;
}

int main()
{
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"The GCD of a & b = "<<gcd(a,b)<<endl;
    cout<<"The LCM of a & b = "<<lcm(a,b)<<endl;
    
    return 0;
}