//    *           Hill Pattern
//   ***
//  *****
// *******


#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 0 ; i < n ; i++)
    {   //for soaces
        for(int j = 0 ; j < (n-i-1) ; j++)
        {
            cout<<"  ";
        }
        //for stars-1
        for(int j = 0 ; j < i+1 ; j++)
        {
            cout<<"* ";
        }
        //for stars-2
         for(int j = 0 ; j < i ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}