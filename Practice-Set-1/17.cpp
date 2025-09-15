#include <iostream>
#include <cmath>
using namespace std;
void q17() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    cout << "GCD = " << a << endl;
}