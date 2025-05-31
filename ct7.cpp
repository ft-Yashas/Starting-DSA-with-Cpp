#include<iostream>                        //print all even numbers from 1 to n
using namespace std;


bool even(int n)
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
    cout<<"Enter N: ";
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        if(even(i))
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