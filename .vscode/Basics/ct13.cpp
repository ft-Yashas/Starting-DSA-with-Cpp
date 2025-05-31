#include<iostream>                     //counting number of digits and USING POWER FUNTION WITH CMATH
#include<cmath>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int y = num;
    int digits=0;
    while(num>0)
    {
        digits++;
        num=num/10;
    }
    cout<<"No of Digits = "<<digits;
    cout<<endl;
    long long tp = pow(y,digits);
    cout<<"Checking pow function "<<tp;
    cout<<endl;
    return 0;
}