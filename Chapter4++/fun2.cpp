#include<iostream>
using namespace std;

int min(int a, int b)
{
   return (a+b);
}

int main()
{
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    cout<<min(a,b)<<endl;

    int x,y;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    cout<<min(x,y)<<endl;
    return 0;
}