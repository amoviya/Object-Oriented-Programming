#include <iostream>
#include <cmath>
using namespace std;
void q16() {
    int n, rev = 0, original;
    cout << "Enter number: ";
    cin >> n;
    original = n;
    for (; n > 0; n /= 10) rev = rev * 10 + (n % 10);
    if (rev == original) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
}