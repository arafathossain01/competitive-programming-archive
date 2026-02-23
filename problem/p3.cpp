// find the divisor of a number
#include <bits/stdc++.h>
using namespace std;

// brute force
void divisor(int num)
{

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    
}

void divisor(int num){
    
}
int main()
{
    int n;
    cin >> n;
    divisor(n);
    return 0;
}