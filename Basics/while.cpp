#include "basicsHeader.h"
#include <iostream>

using namespace std;

/*
while (⟨condició⟩) {
    ⟨instruccions⟩
}
*/

// PROBLEMA: imprimir un contador ascendent d'inici n
void whileExample() {
    int n; // Declaració variables entrada
    cin >> n; // Lectura variables entrada

    // Escriptura output
    while (n > 0) {
        cout << n << endl;
        n--;
    }
}

// PROBLEMA: Màxim de 1000 nombres xD
void max1000() {
    int maxim;
    cin >> maxim;
    int i = 0;
    while (i < 999) {
        int a;
        cin >> a;
        if (a > maxim) maxim = a;
        ++i;
    }
    cout << maxim << endl;
}

// PROBLEMA: llegeixi un nombre natural n, seguit d'n enters, i que n'escrigui la seva suma.
void nSuma() {
    int n;
    cin >> n;

    int result = 0;

    while (n > 0) {
        int sum;
        cin >> sum;
        result += sum;
        n--;
    }

    cout << "RESULT: " << result << endl;
}