// overflow and precision Error

#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* operator precedence

        ()
        ++ -- ! ~
        * / %
        + -
        <<  >>
        < => > =>
        == !=
        &
        ^
        |
        &&
        ||

    */
    /* range of int and long long

         -10^9 < int < 10^9
         -10^18 < long long <10^18
    */

    int a = 100000;
    int b = 100000;
    long int c = a * 1LL * b; // treat the value as long long.

    cout << c << endl;
    return 0;
}