#include<iostream>
#include<cmath>
using namespace std;
void q5() {
    int n, fact = 1;
    cout << "Enter number: ";
    cin >> n;
    while (n > 0) {
        fact *= n;
        n--;
    }
    cout << "Factorial = " << fact << endl;
}
