#include <iostream>

using namespace std;

int number(int a)
{
    if (a == 0) {
        return 0;
    }

    cout << a << "\t";

    return number(a - 1);
}

int main()
{
    int num;

    cout << "Enter number: ";

    cin >> num;

    number(num);

    return 0;
}