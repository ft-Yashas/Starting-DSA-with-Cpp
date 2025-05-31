#include<iostream>               //print the sum of the digits of the given number
using namespace std;


int sumDigits(int n)
{
    int sum=0;
    while(n>0)
    {
        int remainder= n%10;
        n=n/10;
        sum=sum+remainder;
    }
    return sum;
}


int main()
{
    int n;
    cout<<"Enter a number to add the Digits : ";
    cin>>n;
    cout<<sumDigits(n);
    cout<<endl;
    return 0;
}