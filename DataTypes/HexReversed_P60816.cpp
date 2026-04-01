#include <dataTypesHeader.h>
#include <iostream>

using namespace std;

void hexReversed() {
    // INPUT
    int x;
    cin >> x;

    // CÀLCULS I OUTPUT
    if (x == 0) cout << 0;
    else {
        while (x > 0) {
            int digit = x % 16;
            if (digit < 10) cout << digit;
            else cout << char(digit - 10 + 'A');
            x /= 16;
        }
    }
    cout << endl;
}