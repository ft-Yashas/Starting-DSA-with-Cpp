#include <iostream>
using namespace std;

int main() 
{
    int h;
    int m;
    double s;
    cout << "Enter Hours: "<< endl;
    cin >> h;
    cout << "Enter Minutes: "<< endl;
    cin >> m;
    cout << "Enter the speed:" << endl;
    cin >> s;
    int x = (h*60 + m);
    cout << x << endl;
    return 0; 
}