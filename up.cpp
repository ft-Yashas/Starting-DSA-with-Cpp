#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter character : " << endl;
    cin>> ch;
    if(ch>='a' && ch<='z')
    {
        cout << "lowercase\n" << endl;
    }
    else
    {cout<<"UPPERCASE\n"<<endl;}
    return 0;
}