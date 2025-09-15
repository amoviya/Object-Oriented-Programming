#include<iostream>
#include<cmath>
using namespace std;
void q4() {
    int n, sum = 0;
    cout << "Enter N: ";
    cin >> n;
    for (int i = 1; i <= n; i++) sum += i;
    cout << "Sum = " << sum << endl;
}
