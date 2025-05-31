// *
// 1 2
// * * *
// 1 2 3 4
// * * * * *
// 1 2 3 4 5 6


#include<iostream>
using namespace std;

int main()
{
    int n=10;
    for(int i=0; i<n; i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            if(i==0||i%2==0)
            {
                cout<<"* ";
            }
            else
            {
                cout<<j<<" ";
            }
            
        }cout<<endl;
    }
    return 0;
}