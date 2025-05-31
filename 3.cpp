#include<iostream>                             // Factorial of a number.
using namespace std;

int main()
{
    int n;
    long long m=1;
    cout << "Enter the number :";
    cin>> n;
    for (int i=1 ; i <= n ; i++)
    {
        m=m*i;
    }
cout << m << endl;
return 0;
}