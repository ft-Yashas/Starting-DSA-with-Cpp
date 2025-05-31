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
    double x = (h*60 + m)/s;
    //cout << x << endl;
    double y = x-60;
    double z = (x-y)/60;
    cout << "Time = " << z << " Hour & " << y << " Minutes or " << x << " Minutes." << endl;
    return 0; 
}