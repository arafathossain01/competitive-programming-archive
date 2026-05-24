#include <iostream>
using namespace std;

struct car // structure name
{
    int model;
    string name;
    string brand;
};

int main()
{

    car myCar1; // create object

    myCar1.brand = "Toyota";
    myCar1.model = 2022;
    myCar1.name = "Corolla";

    cout << "A car information\n"
         << "Brand: " << myCar1.brand << "\nModel: " << myCar1.model << "\nCar name:" << myCar1.name << endl;
    return 0;
}