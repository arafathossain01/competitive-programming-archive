// sum of Nth number using array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, sum = 0;
    cin >> size;
    int arr[size];

    // input
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // output and sum
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        sum = sum + arr[i];
    }
    cout << endl
         << sum << endl;
    return 0;
}