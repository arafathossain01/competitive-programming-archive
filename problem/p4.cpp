// word capitalization
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    
    cout << (char)toupper(n[0]) << n.erase(0,1)<< endl;
   
    return 0;
}