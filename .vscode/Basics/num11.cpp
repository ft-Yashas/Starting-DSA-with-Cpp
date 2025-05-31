//        *
//       * *
//      *   *
//     *     *
//    *********



#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int m=n+n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
        if(i+j==n-1 || j-i==n-1 || i==n-1)
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