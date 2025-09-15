#include <iostream>
#include <cmath>
using namespace std;
void q20() {
    int marks, sum = 0, count = 0;
    cout << "Enter marks (-1 to stop): ";
    while (cin >> marks && marks != -1) {
        sum += marks;
        count++;
        cout << "Enter marks (-1 to stop): ";
    }
    if (count > 0) cout << "Average = " << (sum / (float)count) << endl;
    else cout << "No marks entered" << endl;
}