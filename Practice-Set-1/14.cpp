#include <iostream>
#include <cmath>
using namespace std;
void q14() {
    int n, maxDigit = 0;
    cout << "Enter number: ";
    cin >> n;
    do {
        int d = n % 10;
        if (d > maxDigit) maxDigit = d;
        n /= 10;
    } while (n > 0);
    cout << "Largest digit = " << maxDigit << endl;
}