#include<iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your Marks : ";
    cin >> marks;

    if(marks > 33)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}