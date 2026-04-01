#include <dataTypesHeader.h>
#include <iostream>

using namespace std;

// PROBLEMA: Volem un programa per calcular la mitjana d'una seqüència (no buida) de nombres reals.
// El resultat s'ha d'escriure amb dos dígits decimals de precisió.

void averageReals() {
    // Fixar format sortida
    cout.setf(ios::fixed);
    cout.precision(2);

    // INPUT I CÀLCULS
    int length = 0;
    double suma = 0;
    double x;
    while (cin >> x) {
        suma += x;
        ++length;
    }

    // OUTPUT
    cout << "MITJANA: " << suma/length << endl;
}