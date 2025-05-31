// 1          
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5


#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int num=1;
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<i+1 ; k++)
        {
            cout<<num<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}