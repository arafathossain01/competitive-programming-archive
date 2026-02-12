#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Array declaration
    // int arr[10] = {10,20,30,40,50,60,70,80,90,100};


    /* Array declaration with user input size*/

    int size;
    cin >> size;
    int arr[size];
    // input array value
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // itaration of array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}