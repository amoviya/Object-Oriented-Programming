#include<iostream>
#include<cmath>
using namespace std;
void q7() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    bool prime = true;
    if (n <= 1) prime = false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) { prime = false; break; }
    }
    if (prime) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;
}