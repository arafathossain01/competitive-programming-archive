#include <bits/stdc++.h>
using namespace std;

// global declaration 

const int n = 1e7; // it will run and never show the segmatation fault.
int arrg[n];
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

/* Usually an array size is 10^5 in local array and in global scope it is 10^7 or 10^8 depand on system.*/