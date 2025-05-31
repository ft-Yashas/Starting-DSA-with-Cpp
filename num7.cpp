// 1 2 3 4 5   5 4 3 2 1
// 2 3 4 5       5 4 3 2
// 3 4 5           5 4 3
// 4 5               5 4
// 5                   5


#include<iostream>
using namespace std;


int main()
{
    int n=5;

    for(int i=0;i<n;i++)
    {
        //left numbers
        for(int j=i+1;j<=n;j++)
        {
            cout<<j<<" ";
        }
        //left spaces
        for(int j=0;j<i;j++)
        {
            cout<<"  ";
        }
        //right spaces
        for(int j=0; j<=i;j++)
        {
            cout<<"  ";
        }
        //right numbers
        for(int j=n-i;j>0;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}