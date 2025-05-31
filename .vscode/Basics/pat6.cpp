// *******    Reverse Hill Pattern
//  *****
//   ***
//    *
   

#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 0 ; i < n ; i++)
    {   //spaces
        for(int j=0 ; j<i ; j++)
        {
            cout<<"  ";
        }
        //stars-1
        for(int j=0 ; j<(n-i) ; j++)
        {
            cout<<"* ";
        }
        //stars-2
        for(int j=0 ; j<(n-i-1) ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}