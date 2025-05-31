#include<iostream>            //Figure out a way to find out if n == power of 2 (using loops)
using namespace std;

bool fun(int n)
{
    if(n<=0)
    return false;

    while(n>1)
    {
        if(n%2 != 0)                //<-------------IMPORTANT STEP!!!
        return false;
         
        n=n/2;
    }
    if(n==1)
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
    if(fun(n))
    {
        cout<<"Power of 2!";
    }
    else{
        cout<<"Not a Power";
    }
    cout<<endl;
    return 0;
}