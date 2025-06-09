#include<iostream>                    //Vectors
#include<vector>                      //Impliment STL
using namespace std;

int main()
{
    vector<int> vec={1,2,3,4};
    int size = 4;
    for(int i=0; i<size; i++)
    {
    cout<<vec[i]<<" ";
    }
    cout<<endl;

    //Or

    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    return 0;

}