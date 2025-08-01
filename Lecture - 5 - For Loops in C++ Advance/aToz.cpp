#include<iostream>
using namespace std;

int main()
{
    for(int i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }

    cout << endl;

    for(int i = 97; i <= 122; i++)
    {
        cout << char(i) << endl;
    }

    cout << endl;

    for(char i = 'a'; i <= 'z'; i++)
    {
        cout << char(i) << endl;
    }

    return 0;
}