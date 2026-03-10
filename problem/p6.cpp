// target sum

#include <bits/stdc++.h>
using namespace std;

void targetSum()
{
    int size, target, sum = 0;
    cin >> size >> target;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        if (sum == 9)
        {
            cout << arr[i] ;
        }
    }
}

int main()
{
    targetSum();
    return 0;
}