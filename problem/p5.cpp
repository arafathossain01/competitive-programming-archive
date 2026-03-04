#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        int sum = 0;
        for (int i = 0; i < 2; i++)
        {
            sum = sum + t % 10;
            t = t / 10;
        }
        cout << sum << endl;
    }
}
int main()
{
    solve();
    return 0;
}