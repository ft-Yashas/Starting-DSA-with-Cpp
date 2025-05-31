//          1
//        2 3 2
//      3 4 5 4 3
//    4 5 6 7 6 5 4


#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {   //left spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"  ";
        }
        //left numbers
        int m=1;
        for(int j=0;j<i+1;j++)
        {
            cout<<i+m<<" ";
            m++;
        }
        //right numbers
        int x=i*2;
        for(int j=i; j>0; j--)
        {
            cout<<x<<" ";
            x--;
        }cout<<endl;
    }
    return 0;
}