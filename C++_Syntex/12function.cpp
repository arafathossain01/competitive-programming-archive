#include <iostream>
using namespace std;

struct Car
{
    int model = 2020;
    string name = "Toyota";
};

void strucFunc(Car c)
{
    cout << "Model: " << c.model << endl
         << "Name: " << c.name << endl;
}

int sum(int parameter1, int parameter2) // // Function receives arguments through parameters
{
    int sum = parameter1 + parameter2;

    return sum;
}

void output(int a)
{
    cout << "I am a void function, i can't return anything.\n";
    cout << "Sum is: " << a << endl;
}

void changeValue(int &num)
{
    num = 60;
}

void arrFunc(int num[5])
{ // passing array
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
    }
}

int plusPoint(int a, int b) // same function name | func overloading
{
    int sum = a + b;
    return sum;
}
double plusPoint(double a, double b) // same func name | func overloading
{
    float sum = a + b;
    return sum;
}
int main()
{
    Car mycar;
    strucFunc(mycar);

    int result = sum(3, 4); // passing argument here
    output(result);

    int num = 20;
    changeValue(num);
    cout << "Value is changed after calling function: " << num << endl;

    int arr[5] = {10, 20, 30, 40, 50};
    arrFunc(arr);

   int sum1 = plusPoint(2, 3);
   float sum2 = plusPoint(3.5, 6.7);

   cout<<"int sum: "<<sum1<<endl;
   cout<<"double sum: "<<sum2<<endl;
}