#include<iostream>
#include<cmath>
using namespace std;
void q6() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    do {
        cout << n % 10;
        n /= 10;
    } while (n > 0);
    cout << endl;
}