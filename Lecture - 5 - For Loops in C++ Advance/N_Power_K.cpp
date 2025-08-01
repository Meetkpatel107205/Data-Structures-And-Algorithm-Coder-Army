#include<iostream>
using namespace std;

int main()
{
    int n,k;

    cout << "Enter Any Number : ";
    cin >> n;

    cout << endl;

    cout << "Enter Power of Number : ";
    cin >> k;

    int result = 1;

    for(int i = 1; i <= k; i++)
    {
        result = result * n;
    }

    cout << "\n" << n << "^" << k << " = " << result;

    return 0;
}