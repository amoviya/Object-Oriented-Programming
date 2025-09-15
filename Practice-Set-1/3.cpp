#include <iostream>
#include <cmath>
using namespace std;
void q3() {
    int n, i = 1;
    cout << "Enter number: ";
    cin >> n;
    do {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    } while (i <= 10);
}