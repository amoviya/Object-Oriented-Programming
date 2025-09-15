#include <iostream>
#include <cmath>
using namespace std;
void q13() {
    int n, original, sum = 0, digits = 0;
    cout << "Enter number: ";
    cin >> n;
    original = n;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    if (sum == original) cout << "Armstrong" << endl;
    else cout << "Not Armstrong" << endl;
}