#include<iostream>                   //even or odd
using namespace std;


bool eo(int n)
{
    if(n%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(eo(n))
    {
        cout<<"Even Number";
    }
    else 
    {
        cout<<"Odd Number";
    }
    cout<<endl;
    return 0;
}