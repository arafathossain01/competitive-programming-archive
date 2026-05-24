#include <iostream>
using namespace std;

int main()
{

    int name[5] = {1, 2, 3, 4, 5};

    for (int itr : name)
    {
        cout << itr << endl;
    }
    cout << sizeof(name) << endl; // return size: 4 * 5 = 20 | int 4 byte

    int length = sizeof(name) / sizeof(name[0]);
    cout << "Length: " << length << endl;

    // 2D array

    int _2dArray[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << _2dArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
    Array works with index. Array index is start from 0.

    2D Array
    [row][col]

    2D arrays are placed like that
    [
    {0,0},{0,1},{0,2}
    {1,0},{1,1},{1,2}
    {2,0},{2,1},{2,2}
    ]
*/