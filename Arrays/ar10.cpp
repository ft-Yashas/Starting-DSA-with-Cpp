#include<iostream>                   //WAP to swap MAX and MIN of an array
using namespace std;

int min(int arr[], int size)
{
    int smallest=INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(arr[i]<smallest)
        smallest = arr[i];
    }
    return smallest;
}


int max(int arr[], int size)
{
    int largest = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(largest<arr[i])
        largest=arr[i];
    }
    return largest;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    int a = min(arr,size);
    int b = max(arr,size);
    cout<<"Min = "<<a<<endl;
    cout<<"Max = "<<b<<endl;
    swap(b,a);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}