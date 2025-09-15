#include <iostream>
#include <cmath>
using namespace std;
void q18() {
    int n, a = 0, b = 1, c;
    cout << "Enter N: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}