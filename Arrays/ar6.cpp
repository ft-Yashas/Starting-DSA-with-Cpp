#include<iostream>                       //WAP to print the location of the index of the smallest & largest number in the array
using namespace std;

int main()
{
    int marks[]={5,15,22,1,-15,24};
    int size=6;
    int n,m;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(marks[i]<smallest)
        {
            smallest=marks[i];
            n=i;
        }
    }
    for(int i=0;i<size;i++)
    {
        if(largest<marks[i])
        {
            largest = marks[i];
            m=i;
        }
    }
    cout<<"Smallest = "<<smallest<<" Index = "<<n<<endl;
    cout<<"Largest = "<<largest<<" Index = "<<m<<endl;
}