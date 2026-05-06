#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks!" << endl;
        return 0;
    }

    int grade = marks / 10; 

    switch (grade)
    {
        case 10:
        case 9:
        case 8:
            cout << "Grade: A+" << endl;
            break;

        case 7:
            cout << "Grade: A" << endl;
            break;

        case 6:
            cout << "Grade: A-" << endl;
            break;

        case 5:
            cout << "Grade: B" << endl;
            break;

        case 4:
            cout << "Grade: C" << endl;
            break;

        case 3:
            cout << "Grade: D (Pass)" << endl;
            break;

        default:
            cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}