#include <bits/stdc++.h>
using namespace std;

void bit()
{
    int t;
    cin >> t;
     int X = 0;
    while (t--)
    {
       
        string s;
        cin >> s;
        if (s == "++X" || s == "X++")
        {
            X = X + 1;
        }
        else if (s == "--X" || s == "X--")
        {
            X = X - 1;
        }
        
    }
    cout << X << endl;
}
int main()
{
    bit();
    return 0;
}