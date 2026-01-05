#include <bits/stdc++.h>
using namespace std;

int main()
{

    // primitive and fundamental

    int i = 10;                // integer (whole number)
    short s = 100;             // smaller than int
    long l = 1000000;          // long
    long long ll = 1e12;       // long long
    float f = 12.54f;          // float 6 or 7 digit
    double db = 12.343;        // double 15 digit
    long double ld = 3.14159;  // long double
    char ch = 's';             // character
    bool flag = true;          // boolean
    string st = "Hello World"; // String

    cout << "integer: " << i << endl;
    cout << "short: " << s << endl;
    cout << "long: " << l << endl;
    cout << "long long: " << ll << endl;
    cout << "float: " << f << endl;
    cout << "double: " << db << endl;
    cout << "long double: " << ld << endl;
    cout << "cahracter: " << ch << endl;
    cout << "Boolean: " << flag << endl;
    cout << "String: " << st << endl;

    // Modifiers
    unsigned int u = 234;     // only positive
    signed int si = -34;      // can be negative
    long int li = 1000000000; // larger number
    short int shi = 10000;    // smaller int

    cout << "Unsigned int: " << u << endl;
    cout << "Signed int: " << si << endl;
    cout << "Long int: " << li << endl;
    cout << "Short int: " << shi << endl;

    // Derived (function is also a derived datatypes)
    int arr[5] = {10, 20, 30, 40, 50}; // array
    int *ptr = &arr[0];                // pointer find memory address
    int &ref = arr[0];                 // find value

    cout << "Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << '\n'
         << "Pointer: " << ptr << endl;
    cout << "value: " << ref << endl;

    // STL containers
    vector<int> v = {20, 30, 40, 50}; // unknown array size
    
    return 0;
}