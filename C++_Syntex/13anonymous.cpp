#include <iostream>
#include <functional>

using namespace std;

// Higher Order Function
// কারণ function parameter হিসাবে নিচ্ছে
void mulFunc(function<void()> func) // callback receive করছে
{
    func();
}

int main()
{
    int x = 10;

    // Lambda Function / Anonymous Function
    // Capture List ব্যবহার করছে
    auto show = [x]() {
        cout << "number: " << x << endl;
    };

    show();

    // Anonymous Function / Lambda Function
    auto message = []()
    {
        cout << "Hello Programmer" << endl;
    };

    // Lambda Function with Parameters
    auto add = [](int a, int b)
    {
        return a + b;
    };

    // Lambda Function
    auto mul = []()
    {
        cout << "Multiplication: " << 6 * 7 << endl;
    };

    message();

    int result = add(5, 6);

    cout << "Sum: " << result << endl;

    // mul এখানে callback function হিসাবে যাচ্ছে
    mulFunc(mul);

    return 0;
}