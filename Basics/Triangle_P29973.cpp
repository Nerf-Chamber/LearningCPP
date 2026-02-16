#include <basicsHeader.h>
#include <iostream>

using namespace std;

void triangle() {
    // INPUT
    int n;
    cin >> n;

    // OUTPUT
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) cout << "*";
        cout << endl;
    }
}