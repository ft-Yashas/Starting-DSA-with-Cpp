// * * * * *        Hour-Glass Pattern
//   * * *
//     *
//     *
//   * * *
// * * * * *



#include<iostream>
using namespace std;

int main()
{
    int n =5;
    for(int i =0 ; i<n ; i++)
    {   //top left spaces
        for(int j=0 ; j<i ; j++)
        {
            cout<<"  ";
        }
        //top left stars
        for(int j=0 ; j<n-i ; j++)
        {
            cout<<"* ";
        }
        //top right stars
        for(int j = 0 ; j<(n-i-1) ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //bottom
    for(int i=0 ; i<n ; i++)
    {   //bottom spaces
        for(int j=0 ; j<(n-i-1); j++)
        {
            cout<<"  ";
        }
        //bottom left stars
        for(int j=0 ; j < i+1 ; j++)
        {
            cout<<"* ";
        }
        //bottom right stars
        for(int j=0 ; j < i ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}