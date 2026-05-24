#include <iostream>
using namespace std;

int main()
{
    // for-each used in array
    int arr[5] = {10, 20, 30, 40, 50};
    for (int num : arr)
    {
        cout << num << endl;
    }
    return 0;
}