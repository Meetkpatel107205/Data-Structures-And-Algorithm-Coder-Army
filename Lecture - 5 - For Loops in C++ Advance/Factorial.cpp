#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Any Number : ";
    cin >> n;

    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "\nFactorial of " << n << " is : " << fact;

    return 0;
}