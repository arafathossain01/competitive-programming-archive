#include <bits/stdc++.h>
using namespace std;

int main()
{

    int myNum = 10, anotherNum = 20; // integer | 32 bits
    const float pi = 3.1416;         // Floating point number |  constant naver will change | 4 bytes | float precision 7 digits
    double myFloat = 10.20;          // Floating point number | 8 bytes | double precision 15 digits
    cout << "fixed value = " << fixed << setprecision(1) << myFloat << endl;
    char myChar = 'x';         // Character | 1 byte
    string myString = "Hello"; // text |
    bool myBool = true;        // return true (1) or false (0)
    auto num = 3;              // auto type assign | Once the type is chosen, it stays the same.
    long long num4 = 23234;    // 64 bits-9 × 10¹⁸ to +9 × 10¹⁸

    cout << "myNum: " << myNum << "\nPi: " << pi << "\nmyFloat: " << myFloat << "\nmyChar: " << myChar << "\nmyString: " << myString << "\nmyBool: " << myBool << "\nnum: " << num << endl;

    cout << num4 << endl;
    return 0;
}