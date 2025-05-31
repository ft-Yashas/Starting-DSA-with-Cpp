#include<iostream>                      // Divisible by 3.
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    if(n%3==0)
    {
        cout<<"Divisible.\n"<<endl;
    }
    else
    {
        cout<<"Not Divisible.\n"<<endl;
    }
    return 0;
}