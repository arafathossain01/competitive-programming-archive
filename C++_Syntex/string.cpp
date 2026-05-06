#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello World\n";
    string fName = "Arafat";
    string lName = "Hossain\n";

    cout << str;
    cout << fName[fName.length() - 1] << "\n"; // access last char
    cout << fName.at(0) << "\n";               // first char access
    cout << fName.append(lName);               // concatenation | change the orginal string
    cout << fName.length() << "\n";            // give the string size

    cout << "User input start from here\n";
    string name;
    cin >> name; // input এ space পেলেই stop করে
    cout << name << "\n";

    cin.ignore(); // fix the buffer issue

    string fname;
    getline(cin, fname); // take input with space, only newline can stop.
    cout << fname << endl;
    return 0;
}

/*
    cin>> এর পর getline(cin,variable) skip হয়ে যায়। কারণ cin>> এর পর newline চাপার কারণে buffer এ থেকে যায়, আর getline() newline পেলেই skip হয়ে যায়।

    
    Input:   Arafat⏎
          ↑
    cin নেয় → Arafat
    buffer এ থাকে → ⏎

    getline আসে → ⏎ দেখে → empty input নেয়
*/