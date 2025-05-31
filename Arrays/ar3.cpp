#include<iostream>
using namespace std;

int main()
{
    int size=5;
    int marks[size];

    for(int i=0; i<size; i++)
    {
        cout<<"Enter Marks : ";
        cin>>marks[i];
        cout<<endl;
    }
    //cout<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<marks[i]<<endl;
    }
    return 0;
}