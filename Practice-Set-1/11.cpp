#include <iostream>
#include <cmath>
using namespace std;
void q11() {
    int a, b, result = 1;
    cout << "Enter a and b: ";
    cin >> a >> b;
    while (b > 0) {
        result *= a;
        b--;
    }
    cout << "Result = " << result << endl;
}