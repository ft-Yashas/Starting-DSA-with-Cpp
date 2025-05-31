#include<iostream>                //Linear Search. Find 8 and return index, else return -1
using namespace std;



int linearSearch(int arr[], int size, int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        {
            return i;      //Found Target
        }
    }
    return -1;             //Not Found Target
}
int main()
{
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    int target=8;
    cout<<"Index = "<<linearSearch(arr,size,target)<<endl;
    cout<<endl;
    return 0;
}