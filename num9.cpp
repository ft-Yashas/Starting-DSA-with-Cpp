//         5            <-------- REVISIT!!!!
//       5 4 5
//     5 4 3 4 5
//   5 4 3 2 3 4 5
// 5 4 3 2 1 2 3 4 5
//   5 4 3 2 3 4 5
//     5 4 3 4 5
//       5 4 5
//         5


#include<iostream>
using namespace std;

int main()
{
    int n=5;
    //top part
    for(int i=0;i<n;i++)
    {   //top left spaces
        for(int j=0; j<n-i-1; j++)
        {
            cout<<"  ";
        }
        //int num=5;
        //top left numbers
        for(int j=n; j>=n-i; j--)
        {
            cout<<j<<" ";
        }
        //top right
        for(int j=(n-i+1); j<=n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //bottom part
    for(int i=0; i<n-1; i++)
    {
        //bottom left spaces
        for(int j=0; j<i+1; j++)
        {
            cout<<"  ";
        }
        //bottom left numbers
        for(int j=n; j>=i+2; j--)
        {
            cout<<j<<" ";
        }
        //bottom right
        for(int j=i+3; j<=n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}