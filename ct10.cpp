#include<iostream>                   //check if given number is a palindrome (reads the same backwards ex- 121, 1331)
using namespace std;

int reverseNumber(int n)
 {
    int reversed_number = 0;
    while (n > 0) 
    {
        int remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    return reversed_number;
}

int main()
{
    double n;
    cout<<"Enter a String : ";
    cin>>n;
    if(reverseNumber(n)==n)
    {
        cout<<"The Given Number is a Palindrome.";
    }
    else
    {
        cout<<"Not a Palindrome.";
    }
    cout<<endl;
    return 0;
}