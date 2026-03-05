#include <bits/stdc++.h>
using namespace std;

void nextRound()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int position = arr[k-1];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= position && arr[i] >0)
            {
                count += 1;
            }
        }
    
    cout << count <<endl;
}
int main()
{
    nextRound();
    return 0;
}