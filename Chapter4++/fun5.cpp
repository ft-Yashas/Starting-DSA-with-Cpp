#include<iostream>
using namespace std;


long long fac(long long n)
{
    int f=1;
    for(int i=1; i<=n; i++)
    {
      f=f*i;
    }
    return f;
}

int main()
{
    long long n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<fac(n)<<endl;
    return 0;
}