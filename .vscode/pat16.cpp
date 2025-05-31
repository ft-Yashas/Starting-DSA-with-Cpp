#include<iostream>
using namespace std;

int main()
{
    int n = 5;  // height of the triangle

    for(int i = 0; i < n; i++)
    {
        // Print leading spaces
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print stars and hollow space in between
        for(int j = 0; j < 2 * i + 1; j++)
        {
            // Print star at the boundary or last row
            if(j == 0 || j == 2 * i || i == n - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}