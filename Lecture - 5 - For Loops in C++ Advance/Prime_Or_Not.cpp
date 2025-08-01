#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a Number to Check Whether Number is Prime or Not : ";
    cin >> n;

    if(n < 2)
    {
        cout << "\nNot Prime";
        return 0;
    }
    else
    {
        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                cout << "\nNot Prime";
                return 0;
            }
        }
        cout << "\nPrime";
    }

    return 0;
}