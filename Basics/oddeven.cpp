#include <iostream>
using namespace std;

int main()
{
    long n;
    cout << "Enter a Number : " << endl;
    cin>>n;
    if (n%2==0)
    {
        cout << "The given number is Even!"<< endl;
    }
    else
    {
        cout << "The given number is Odd!"<< endl;
    }
    return 0;
}