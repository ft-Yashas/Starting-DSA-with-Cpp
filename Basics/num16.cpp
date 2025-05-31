// 7 6 5 4 3 2 1
// $ $ $ $ $ $
// * * * * *
// 7 6 5 4
// $ $ $
// * *
// 7


#include<iostream>
using namespace std;

int main()
{
    int n=7;
    int num=n;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j-i>0;j--)
        {
        if( i==0 || i%3==0 )
        {
            cout<<j<<" ";
        }
        //cout<<endl;
        
        else if(i==1 || i%4==0)
        {
            cout<<"$ ";
        }
        //cout<<endl;
        else
        {
            cout<<"* ";
        }
        }
        cout<<endl;
    }
    return 0;
}