//         * * * *             Rhombus Star Pattern 
//       * * * *
//     * * * *
//   * * * *
// * * * *



#include<iostream>
using namespace std;

int main()
{
    int n,m =4;
    cout<<"Enter No of Rows :";
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {   //left spaces
        for(int j=0 ; j<n-i-1 ; j++)
        {
            cout<<"  ";
        }
        //right stars
        for(int j=0 ; j<m ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}