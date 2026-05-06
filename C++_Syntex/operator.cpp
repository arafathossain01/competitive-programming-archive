#include <iostream>
using namespace std;

int main()
{

    auto a = 30;
    auto b = 20;

    // Arithmetic operators
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b; // return the remainder

    int incr = a++;  // first use, then increment
    int incr2 = ++a; // first increment, then use
    int decr = b--;  // first use, then decrement
    int decr2 = --b; // first decrement, then use

    double num1 = 10.0;
    double num2 = 3.0;
    double result = num1 / num2;

    cout << "Sum: " << sum << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Multiplication: " << mul << endl;
    cout << "Division: " << div << endl;
    cout << "Modulus: " << mod << endl;
    cout << "Post Increment (a++): " << incr << endl;
    cout << "Pre Increment (++a): " << incr2 << endl;
    cout << "Post Decrement (b--): " << decr << endl;
    cout << "Pre Decrement (--b): " << decr2 << endl;
    cout << "Double Division (10.0 / 3.0): " << result << endl;

    // Comparison operators
    /*
        == (equal to)
        != (not equal to)
        > (greater than)
        < (less than)
        >= (greater than or equal to)
        <= (less than or equal to)
    */

    // logial operators
    /*
        && (and) | 	Returns true if both statements are true
        || (or) | 	Returns true if one of the statements is true
        ! (not) | 	Reverse the result, returns false if the result is true
    */

    // precedence
    /*
    () -> Parentheses
    *, /, % -> Multiplication, Division, Modulus
    +, - -> Addition, Subtraction
    >, <, >=, <= -> Comparison
    ==, != -> Equality
    && -> Logical AND
    || -> Logical OR
    = -> Assignment
    */
    return 0;
}