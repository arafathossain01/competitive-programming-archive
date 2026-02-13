#include <bits/stdc++.h>
using namespace std;

void hello()
{
    cout << "Hello world" << endl;
}

int sum(int par1, int par2)
{
    int sum = par1 + par2;
    return sum;
}


void increment(int &a, int b) 
{
    /*  here the first is pass by reference and second is pass by value.

        When we use pass by reference as a parameter it take an address.
        it means if we chnage variable inside the function it will effect on the main variable.
        
        when we use pass by value as a parameter it take a copy of variable.
        it will never change the main value.
        
        An array is always pass by reference.
    */
    a++;
    b++;
}
int main()
{
    // hello();
    // cout<< sum(10, 20) <<endl;

    int n = 3;
    int m = 4;

    cout << n << " " << m << endl;

    increment(n, m);

    cout << n << " " << m << endl;
    return 0;
}

/* main() is a default function in C/C++. the code is run from the main() function
    A function is not return anything then it will be a void function.
    A return type function has two thing 1. parameters 2. argumnets
*/