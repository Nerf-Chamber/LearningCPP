#include "basicsHeader.h"
#include <iostream>

using namespace std;

// PROBLEMA: Trobar el MCD de dos nombres
void mcdA() {
    // INPUT
    int x, y;
    cin >> x >> y;

    // Declaració variable de sortida
    int mcd = x < y ? x : y;

    // Càlcul variable de sortida
    while (!(x%mcd == 0 && y%mcd == 0)) --mcd;

    // OUTPUT
    cout << "MCD: " << mcd << endl;
}