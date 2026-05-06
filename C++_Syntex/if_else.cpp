#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80 && marks <= 100) {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade: A-" << endl;
    }
    else if (marks >= 50) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 40) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 33) {
        cout << "Grade: D (Pass)" << endl;
    }
    else if (marks >= 0) {
        cout << "Grade: F (Fail)" << endl;
    }
    else {
        cout << "Invalid marks!" << endl;
    }

    return 0;
}