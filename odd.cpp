#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : \n"<< endl;
    cin>> n;
    if(n%2==0)
    {
        cout<< "The Entered number is Positive number.\n"<< endl;
    }
    else
    {
        cout<< "The Entered number is Negative number.\n"<< endl;
    }
    return 0;
}