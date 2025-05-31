//    *              Diamond Pattern
//   ***
//  *****
// *******
//  *****
//   ***
//    *   
   

#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i=0 ; i<n ; i++)
    {   //1st half spaces
        for(int j=0 ; j<(n-i-1) ; j++)
        {
            cout<<"  ";
        }
        //1st half left stars
        for(int j=0 ; j<i+1 ; j++)
        {
            cout<<"* ";
        }
        //1st half right stars
        for(int j=0 ; j < i ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //bottom part
    for(int i=0 ; i<n-1 ; i++)
    {    //bottom spaces
        for(int j = 0 ; j<i+1 ; j++)
        {
            cout<<"  ";
        }
        //bottom stars left side
        for(int j=0 ; j<(n-i-1) ; j++)
        {
            cout<<"* ";
        }
        //bottom right stars
        for(int j=0 ; j<(n-i-2) ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}