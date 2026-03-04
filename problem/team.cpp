#include <bits/stdc++.h>
using namespace std;

void team()
{
    int t;
    cin >> t;
    int sum = 0;
    while (t--)
    {
        int size = 3;

        int arr[3];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] == 1 && arr[2] == 1 || arr[0] == 1 && arr[1] == 1 || arr[1] == 1 && arr[2] == 1)
        {
            sum += 1;
        }
    }
    cout << sum << endl;
}
int main()
{
    team();
    return 0;
}