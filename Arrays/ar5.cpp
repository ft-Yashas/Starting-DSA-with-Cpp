#include<iostream>              //find smallest number in the array
using namespace std;


int main()
{
    int marks[6]={5,15,22,1,-15,24};
    int size=6;
    int smallest = INT_MAX;               //<---- INT_MAX == +Infinity in C++
    for(int i=0;i<size;i++)
    {
        if(marks[i]<smallest)
        {
            smallest=marks[i];
        }
    }
    cout<<"Smallest = "<<smallest<<endl;
    return 0;
}