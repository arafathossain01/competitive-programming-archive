#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];

    for (int &x : arr)
    {
        cin >> x;
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}