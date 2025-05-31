// 0
// 0 1
// 0 1 2
// 0 1 2 3
// 0 1 2 3 4
// 0 1 2 3
// 0 1 2
// 0 1
// 0



#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {   //top part
        for(int j=0;j<i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }    
        //bottom part
        for(int i=0;i<n-1;i++)
        {
        for(int j=0; j<n-i-1 ;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        }
    
    return 0;
}