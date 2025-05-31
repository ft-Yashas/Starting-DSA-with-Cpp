// *             *                   <-- Unnamed pattern
// * *         * *
// * * *     * * *
// * * * * * * * * 


#include<iostream>
using namespace std;

int main()
{
    int n = 7;
    for(int i=0 ; i<n ; i++)
    {   //left stars
        for(int j=0 ; j<i+1 ; j++)
        {
            cout<<"* ";
        }
        //left spaces
        for(int j=0 ; j<n-i-1 ; j++)
        {
            cout<<"  ";
        }
        //right spaces
        for(int j=0 ; j<n-i-1 ; j++)
        {
            cout<<"  ";
        }
        //right stars
        for(int j=0 ; j<i+1 ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}