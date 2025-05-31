#include <iostream>                              // simple WHILE loops
using namespace std;

int main()
{
    int n;
    int sum=0;
    int i=1;
    cout<<"Enter a number : ";
    cin>>n;
    while(i <=n)
    {
        sum = sum+i;
        i++;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}