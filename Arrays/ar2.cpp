#include<iostream>                     //Loops on Arrays
using namespace std;

int main()
{
    int marks [5] = {99, 100, 88, 36, 57};                      //arrays location = 0 -> size-1
    int size=5;
    for(int i=0; i<size; i++)
    {
        cout<<marks[i]<<endl;
    }
    cout<<endl;
    return 0;
}