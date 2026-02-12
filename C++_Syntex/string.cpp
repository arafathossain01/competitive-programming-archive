/*
    == equal to operator, it's a compare operator.
    indexes are strat form 0.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string str1 = "Mango";
    // string str2 = "Mango";
    // string result = str1 + str2; // concat two string

    // cout << str1[2] << endl;

    // cout << str1.size() << endl; // return it size of string

    // if (str1 == str2)            // if two string is same
    // {
    //     cout << "Equal" << endl;
    // }
    // else
    // {
    //     cout << "Not Equal" << endl;
    // }

    // // iterate all the charecter
    // string str3 = "Bangladesh is a good country!";

    // for (int i = 0; i < str3.size(); i++)
    // {
    //     cout << str3[i] << "\t";
    // }
    // cout<<endl;

    // string str4 , str5;
    // cin>> str4 >> str5;

    // getline(cin, str4); // It will take the input exactly as the user enters it.

    // cout<<str4;

    // reverse string

    string str1 = "Bangladesh";
    for (int i = str1.size() - 1; i >= 0; i--)
    {
        cout << str1[i]; // return as a charecter
    }

    cout << endl;
}