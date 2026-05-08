#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    /*
        // while loop
        int i =1;
        while(i<=num){
            cout<<i<<endl;
            i++;
        } */

    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    cout << sum << endl;

    return 0;
}