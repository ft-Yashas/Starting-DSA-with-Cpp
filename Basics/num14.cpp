    //    *
    //   * *
    //  *   *
    // *     *
    //  *   *
    //   * *
    //    *
           
#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int l=n+n-1;
    //top part
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(i+j==n-1 || j-i==n-1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    //bottom part
    for(int i=0;i<n-1;i++)
    {
        int m=n+1;
        for(int j=1;j<l;j++)
        {
            if(j-i==2 || i+j==n+n-2)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}