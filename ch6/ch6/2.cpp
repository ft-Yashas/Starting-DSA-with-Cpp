#include<iostream>         //wap Binary to Decimal Number
using namespace std;

int bNum(int x)
{
    int ans = 0;
    int pow = 1;
    while(x>0)
    {
        int rem=x%10;
        x/=10;
        ans+=(rem*pow);
        pow*=2
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a Binary Number : ";
    cin>>n;
    cout<<"The Decimal form of "<<n<<" is : "<<bNum(n)<<endl;
    return 0;
}