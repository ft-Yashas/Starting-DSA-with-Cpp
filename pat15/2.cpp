// * * * * * *       Hollow Square Pattern
// *         *
// *         *
// *         * 
// * * * * * *


#include<iostream>
using namespace std;

int main()
{
    int n=5,m=6; //   n=rows, m=columns
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==m-1)
            {cout<<"* ";}
            else {cout<<"  ";}
            //cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}