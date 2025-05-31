#include<iostream>            //Reverse an Array
using namespace std;          //2-pointer approach

void swap(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    cout<<"Before Swapping : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swap(arr,size);                     //<--- Applies function, Arrays are always printed with for loop
    cout<<"After Swapping : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    return 0;
}