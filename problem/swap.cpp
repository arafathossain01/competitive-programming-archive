#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    cout << "Before Swap: " << a << " " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After Swap: " << a << " " << b<<endl;
}

int main()
{

    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;
    swap(a, b);
    return 0;
}