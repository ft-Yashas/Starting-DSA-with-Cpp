// 1                 1
// 2 1             1 2
// 3 2 1         1 2 3
// 4 3 2 1     1 2 3 4
// 5 4 3 2 1 1 2 3 4 5



#include<iostream>
using namespace std;


int main()
{
    int n=5;
    
    for(int i=0;i<n;i++)
    {   //left numbers
        int num =1;
        for(int j=i+1;j>0;j--)
        {
            cout<<j<<" ";
        }
        //left spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"  ";
        }
        //right spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"  ";
        }
        //right numbers
        for(int j=0;j<i+1;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}