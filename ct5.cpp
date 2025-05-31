#include<iostream>                        //print fibonacci series till n
using namespace std;

// int fib(int n)
// {
//     int fn=0;
//     int sn=1;
//     while(fn<=n)
//     {
//     cout<<fn;
//     cout<<sn;
//     sn=sn+fn;
//     }
//     return fn;
// }


int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    int first = 0 , second = 1;
    while(first <= n)
    {
        cout<<first<<" ";
        int next = first + second;
        first = second ;
        second = next ;
    }
    cout<<endl;
    return 0;
}