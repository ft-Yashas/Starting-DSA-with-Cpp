#include<iostream>
using namespace std;

int bNum(int n)
{
    int ans=0;
    int pow=1;
    for(int i=1; n>0; i++)
    {
        int rem=n%10;
        n=n/10;
        ans=ans+(rem*pow);
        pow=pow*2;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a Binary Number : ";
    cin>>n;
    cout<<bNum(n);
    cout<<endl;
    return 0;
}