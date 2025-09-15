#include <iostream>
#include <cmath>
using namespace std;
void q2() {
    int i = 1, count = 0;
    while (count < 10) {
        if (i % 2 == 0) {
            cout << i << " ";
            count++;
        }
        i++;
    }
    cout << endl;
}