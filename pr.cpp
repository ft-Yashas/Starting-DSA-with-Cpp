#include<iostream>                 // FOR loops using BOOLEAN data type
using namespace std;               // finding if n is a PRIME number

int main()
{
    bool isPrime = true;
    int n;
    cout << "Enter a number : "<<endl;
    cin>>n;
    for(int i=2 ; i*i<=n ; i++)   // here while finding prime numbers, there's no need to go till (n-1) because a non prime number can be divisible by a number less than √n.
    {
        if(n%i==0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not a Prime Number"<<endl;
    }
    cout<<endl;
    return 0;
}