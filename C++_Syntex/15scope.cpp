#include<iostream>
using namespace std;

int a = 10; // global variable
// এটা পুরো program এ use করা যায়

void func(){

    int a = 20; // local variable
    // এটা শুধু func() এর ভিতরে use করা যাবে

    cout << a << endl;
    // এখানে local variable a = 20 print হবে
}

int main(){

    cout << a << endl;

    // এখানে global variable a = 10 print হবে
    // কারণ main() এর ভিতরে local a নেই

    func();

    return 0;
}