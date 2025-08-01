#include<iostream>
using namespace std;

int main()
{
    int a = 12121;
    char c = 'd';
    c = a;

    cout << c;

    return 0;
}

// c = a;

// Now the integer a (which is 12121) is assigned to the char variable c.

// But char can only hold values in the range -128 to 127 (for signed char) or 0 to 255 (for unsigned char), depending on the system.

// Since 12121 is much larger than what char can store, only the least significant byte (last 8 bits) of the integer will be stored in c.

// 🔍 How it works:
// 12121 in binary (32-bit) is:
// 00000000 00000000 00101111 01011001

// Only the last 8 bits (01011001) are stored in c.
// That’s binary for 89, which is the ASCII code for the character 'Y'.

// cout << c;

// This prints the character stored in c, which now holds ASCII code 89 → 'Y'.