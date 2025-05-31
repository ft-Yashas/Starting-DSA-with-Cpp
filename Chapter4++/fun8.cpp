#include<iostream>            //waf to check if n==prime number
using namespace std;


int prime(int n)
{
    //int a=0;
    for(int i=0; i<n ;i++)
    {
        cout<<i;
    }
    return n;
}

int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if (n%prime(n)==0)
    {
        cout<<"Not Prime";
    }
    else
    {
        cout<<"Prime";
    }
    cout<<endl;
    return 0;
}