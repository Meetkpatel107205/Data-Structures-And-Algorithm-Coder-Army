#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Your Age : ";
    cin >> n;

    if(n >= 18)
    {
        cout << "Adult";
    }
    else if(n >= 12 && n < 18)
    {
        cout << "Teen";
    }
    else
    {
        cout << "Kid";
    }
}