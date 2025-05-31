#include<iostream>               //WAP to calculate sum and product of all numbers in an array
using namespace std;


int sum(int arr[], int size)
{
    int ans=0;
    for(int i=0; i<size; i++)
    {
        ans=ans+arr[i];
    }
    return ans;
}

int product(int arr[], int size)
{
    int ans=1;
    for(int i=0;i<size;i++)
    {
        ans=ans*arr[i];
    }
    return ans;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    cout<<"Sum of all Arrays = "<<sum(arr,size)<<endl;
    cout<<"Product of all Arrays = "<<product(arr,size)<<endl;
    return 0;
}