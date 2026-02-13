// sum of digits

#include <bits/stdc++.h>
using namespace std;

int dSum(int n)
{
    int sum = 0;
    while (n)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << dSum(n) << endl;
    return 0;
}