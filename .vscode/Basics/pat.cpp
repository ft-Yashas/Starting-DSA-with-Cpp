#include<iostream>                             // pattern with same no of rows and columns
using namespace std;                           // NESTED loop

int main()
{
    int n=4;
    //cout<<"Enter a number : ";
    //cin>>n;
    
    for(int i=1 ; i<=n ; i++)                    //<-------outer loop
    {
        for(int j = 1 ; j<=n ; j++)              //<-------inner loop
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
        
    return 0;
}