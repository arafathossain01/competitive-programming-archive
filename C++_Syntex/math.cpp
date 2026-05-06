#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    auto a = 10;
    auto b = 20;
    auto c = 64;

    cout << min(a, b) << endl; // find lowest value
    cout << max(a, b) << endl; // find highest value

    // include in <camth> library
    cout << sqrt(c) << endl;
    cout << round(4.5) << endl; // যদি point এর পর ৪ এর বড় থাকে তাহলে upperbound ধরে round করে দিবে।
    cout << log(2) << endl;     // logarithm

    return 0;
}