//       1
//     2 3 2
//   3 4 5 4 3
// 4 5 6 7 6 5 4


#include<iostream>
using namespace std;


int main()
{
    int n=4;
    for ( int i=0; i<n;i++)
    {
        for(int j=0 ;j<n-i-1;j++)
        {
            cout<<". ";
        }
        cout<<endl;
    }
    return 0;
}