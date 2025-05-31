// * * * * * *       Hollow Square Pattern
// *         *
// *         *
// *         * 
// * * * * * *


#include<iostream>
using namespace std;

int main()
{
    int n=5 , m=6;
    for(int i=0 ; i < n ; i++)
    {   //first and last full lines
        if(i==0 || i==4)
        {
            for(int j =0 ; j<m ; j++){cout<<"* ";}cout<<endl;
        } 
        //center lines
        else if
            (i==1 || i==2 || i==3)
            {   //left hollow lines
                for(int j=0 ; j<1 ; j++)
                {
                    cout<<"* ";
                }//cout<<endl;
                //center blanks spaces
                for(int j=0 ; j<n-1 ; j++)
                {
                    cout<<"  ";
                }//cout<<endl;
                //right hollow lines
                for(int j=0 ; j<1 ; j++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
    }
    return 0;
}