#include<iostream>                  //wap to reverse an integer n
using namespace std;

int rev(int n)
{
    int ans = 0;
    int x=1;
    while(n>0)
    {
        int rem= n%10;
        //n=n/10;
        ans=ans*10+rem;        //<--------------------Important!!!!
        n=n/10;
    }
    return ans;
}


int main()
{
    int n;
    cout<<"Enter an Integer: ";
    cin>>n;
    cout<<"Reverse of "<<n<<" is : "<<rev(n);
    cout<<endl;
    return 0;
}