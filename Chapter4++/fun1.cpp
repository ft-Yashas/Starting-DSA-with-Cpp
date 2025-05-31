#include<iostream>
using namespace std;

int printHello()
{
    cout<<"Hello\n";
    return 3;
}
int main()
{
    // int n = printHello();
    // cout<<"n = "<<n<<endl;   

    //or

    cout<<printHello()<<endl;


    return 0;
}