#include<iostream>             //wap to convert Decimal Number to Binary Number
using namespace std;


int dNum(int x)
{
    int ans=0;
    int pow=1;
    while(x>0)
    {
        int rem=x%2;
        x=x/2;
        ans=ans+(rem*pow);
        pow=pow*10;
    }
    return ans;    //binary form
}

int main()
{
    int n;
    // for(int i=1; i<=20; i++)
    // {
    // cout<<dNum(i)<<endl;
    // }
    cout<<"Enter a Decimal Number : ";
    cin>>n;
    cout<<"Binary form of "<<n<<" is : "<<dNum(n);
    cout<<endl;
    return 0;
}