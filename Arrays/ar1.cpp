#include<iostream>                     //Array Basics
using namespace std;

int main()
{
    int marks [5] = {99, 100, 88, 36, 57};                      //arrays location = 0 -> size-1
    marks[2]=95;               //Updating/changing arrays

    cout<<marks [0]<<endl;     //Printing arrays based on location/index
    cout<<marks [1]<<endl;
    cout<<marks [2]<<endl;
    cout<<marks [3]<<endl;
    cout<<marks [4]<<endl;
    cout<<endl;
    return 0;
}