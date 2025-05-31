//    *      *        Double Hill Pattern
//   ***    ***
//  *****  *****
// **************


#include<iostream>
using namespace std;


int main()
{
    int n = 4;
    for(int i = 0 ; i < n ; i++)
    {   //first hill left spaces
        for(int j =0 ; j<(n-i-1); j++)
        {
            cout<<"  ";
        }
        //first hill left stars
        for(int j=0 ; j<i+1 ; j++)
        {
            cout<<"* ";
        }
        //first hill right stars
        for(int j=0 ; j<i ; j++)
        {
            cout<<"* ";
        }
        //first hill right side filling spaces
        for(int j = 0 ; j<(n-i-1) ; j++)
        {
            cout<<"  ";
        }
        //second hill left side spaces
        for(int j =0 ; j<(n-i-1); j++)
        {
            cout<<"  ";
        }
        //second hill left stars
        for(int j=0 ; j<i+1 ; j++)
        {
            cout<<"* ";
        }
        //second hill right stars
        for(int j=0 ; j<i ; j++)
        {
            cout<<"* ";
        }
        //first hill right side filling spaces
        // for(int j = 0 ; j<(n-i-1) ; j++)
        // {
        //     cout<<"  ";
        // }
        cout<<endl;
    }
    return 0;
}