#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Any Number : ";
    cin >> n;

    cout << endl;

    for(int i = 1; i <= n; i = i + 3)
    {
        cout << i << endl;
    }

    return 0;
}