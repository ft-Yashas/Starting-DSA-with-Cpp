// *   *     Sleeping Hour Glass Pattern    <----------- Revisit!!
// ** **
// *****
// ** **
// *   *


#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 0 ; i<n ; i++)
    {   //top left stars
        for(int j=0 ; j<i+1 ; j++)
        {
            cout<<"* ";
        }
        // top left spaces
        for(int j = 0; j<(n-i-1) ; j++)
        {
            cout<<"  ";
        }
        //top right spaces
        for(int j=0; j<(n-i-1) ; j++)
        {
            cout<<"  ";
        }
        //top right stars
        for(int j=0 ; j<i+1 ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //bottom left
    for(int i=1; i<n ; i++)
    {   //bottom left stars
        for(int j = 0; j<n-i ; j++)
        {
            cout<<"* ";
        }
        //bottom left spaces
        for(int j=0 ; j<i ; j++)
        {
            cout<<"  ";
        }
        //bottom right spaces
        for(int j=0; j<i ; j++)
        {
            cout<<"  ";
        }
        //bottom right stars
        for(int j=0; j<(n-i) ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}