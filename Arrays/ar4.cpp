#include<iostream>                       //Find the largest number in the array
using namespace std;

int main()
{
    int marks[]={5,15,22,1,-15,24};
    int size=6;
    int largest = INT_MIN;              // <----- INT_MIN = -Infinity
    for(int i=0;i<size;i++)
    {
        if(largest<marks[i])
        {
            largest=marks[i];
        }
    }
    cout<<"Largest = "<<largest<<endl;
}