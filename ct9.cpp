#include<iostream>                   //reverse the given number/string
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
    cout<<"String before reversal : "<<n<<endl;
    cout<<"String after reversal : "<<reverseNumber(n)<<endl;
    return 0;
}