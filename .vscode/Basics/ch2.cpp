//       1
//     4 9 16
// 25 36 49 64 81
// ................


#include <iostream>
using namespace std;



int main()
{
    int n=4;
    int m=1;
    //int x=m+3;
    for(int i=0; i<n; i++)
    {   //spaces
        for(int j=0; j<n-i-1 ;j++)
        {
            cout<<"      ";
        }
        //numbers
        for(int j=0;j<i+i+1;j++)
        {
            cout<<m*m<<"   ";
            m++;
        }
        //cout<<endl;
        cout<<endl;
    }
    return 0;
}
