#include<iostream>
using namespace std;

int main()
{
    int package;
    cin >> package;

    if(package >= 6)
    {
        cout << "Accepted";
    }
    else
    {
        cout << "Rejected";
    }

    return 0;
}