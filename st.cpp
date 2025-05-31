#include<iostream>                   // NESTED Loops
using namespace std;

int main()
{
    int r;
    int c;
    cout << "Enter number of rows : "<<endl;
    cin>>r;
    cout << "Enter number of columns : "<<endl;
    cin>>c;
    for(int i = 1 ; i <= r ; i++)
    {
        for (int i = 1 ; i <= r ; i++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
    return 0;
}