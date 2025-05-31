#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int s = a+b;
    return s;
}

int main()
{
    int a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<sum(a,b)<<endl;
    return 0;
}