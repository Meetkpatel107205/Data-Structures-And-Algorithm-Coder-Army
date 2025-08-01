#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Any Number : ";
    cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "\nSum = " << sum;

    cout << "\nSum = " << ((n*(n+1))/2);

    return 0;
}