#include<iostream>                                //grading system usinf if-else
using namespace std;

int main()
{
    int n;
    cout<<"Enter your score : ";
    cin>> n;
    if(n>=90)
    {
        cout<<"Grade - A"<<endl;
    }
    else if(n>=80 && n<90)
    {
        cout<<"Grade - B"<<endl;
    }
    else if(n>=70 && n<80)
    {
        cout<<"Grade - c"<<endl;
    }
    else if(n>=40&&n<70)
    {
        cout<<"Grade - D"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
    return 0;
}