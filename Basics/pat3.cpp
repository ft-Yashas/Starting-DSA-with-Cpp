//    *          Flipped simple pyramid
//   **
//  ***
// ****   


#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 0 ; i < n ; i++)
    { //for spaces
        for(int j = 0 ; j < (n-i-1) ; j++)
        {
            cout<<"  ";
        }
        // cout<<"* ";
        // cout<<endl;
        for(int j = 0 ; j < i+1 ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}