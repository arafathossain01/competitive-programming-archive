#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long x =1;
    for(int i=1; i<=n; i++){
        x = (x*i)%10;
    }
    cout<<x%10<<endl;
    return 0;
}

// finding the n! last digit.