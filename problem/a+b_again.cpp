
#include <bits/stdc++.h>
using namespace std;
 
void digitSum()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int sum = 0;
        for (int i = 1; i <= 2; i++)
        {
 
            sum = sum + (a % 10);
            a = a / 10;
        }
        cout << sum << endl;
    }
}
int main()
{
    digitSum();
    return 0;
}