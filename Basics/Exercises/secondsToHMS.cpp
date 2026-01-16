#include <iostream>
#include "secondsToHMS.h"

using namespace std;

/* PROBLEMA:
Considereu el problema següent: Donada una quantitat (positiva) de segons n, es vol saber quantes hores, minuts i segons representa.
Per exemple, si n val 3661, cal dir que en 3661 segons hi ha una hora, un minut i un segon. També, si n val 76234, cal dir que en
76234 segons hi ha 21 hores, 10 minuts i 34 segons (no feu el mandra: comproveu-ho!).
*/

// PROTOTYPE
void prot_transformSecondsToHMS(const int initialSeconds) {
    int seconds = initialSeconds % 60;
    int initialMinutes = initialSeconds / 60;
    int minutes = initialMinutes % 60;
    int hours = initialMinutes / 60;

    cout << "HORES: " << hours << "\nMINUTS: " << minutes << "\nSEGONS: " << seconds << endl;
}

// NICE SOLUTION
void transformSecondsToHMS(const int initialSeconds) {
    // Declaració variables de sortida
    int h, m, s;

    // Càlcul de les variables de sortida
    h = initialSeconds / 3600;
    m = (initialSeconds % 3600) / 60;
    s = initialSeconds % 60;

    // Escriptura de les sortides
    cout << "HORES: " << h << "\nMINUTS: " << m << "\nSEGONS: " << s << endl;
}