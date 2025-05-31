//         1    
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
//   1 2 3 4 3 2 1
//     1 2 3 2 1
//       1 2 1 
//         1



#include<iostream>
using namespace std;


int main()
{
    int n=5;
    
    for(int i=0;i<n;i++)
    {   //top left space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"  ";
        }
        int num=1;
        //top left numbers
        for(int j=0;j<i+1;j++)
        {
            cout<<num<<" ";
            num++;
        }
        //top right numbers
        for(int j=0; j<i;j++)
        {
            cout<<num-2<<" ";
            num--;
        }
        cout<<endl;
    }
    //bottom left space
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"  ";
        }
        int num=1;
        //bottom left numbers
        for(int j=0;j<n-i-1;j++)
        {
            cout<<num<<" ";
            num++;
        }
        //bottom right
        for(int j=0;j<n-i-2;j++)
        {
            cout<<num-2<<" ";
            num--;
        }
        cout<<endl;
    }
    return 0;
}