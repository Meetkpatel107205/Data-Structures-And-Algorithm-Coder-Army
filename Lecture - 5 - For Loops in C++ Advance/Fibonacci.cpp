#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Any Number : ";
    cin >> n;

    int last = 0,prev = 1;

    for(int i = 0; i < n; i++)
    {
        int curr = last + prev;
        cout << last << " ";
        last = prev;
        prev = curr;
    }

    return 0;
}