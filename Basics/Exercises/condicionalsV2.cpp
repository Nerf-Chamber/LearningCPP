#include "condicionalsV2.h"
#include <iostream>

using namespace std;

/* PROBLEMA:
Considereu el problema següent: Donada una hora (amb el seu nombre d'hores, de minuts i de segons), es vol sumar un
segon a aquesta hora. A més, es vol que el resultat s'escrigui amb el format habitual dels rellotges: les hores,
minuts i segons s'escriuen amb dos dígits i se separen per dos punts. Per exemple, donada l'hora 14:09:59,
cal escriure 14:10:00.
*/

void sumaUnSegon() {
    int h, m, s; // Declaració variables d'entrada
    cin >> h >> m >> s; // Lectura variables d'entrada

    // Càlcul noves variables de sortida
    s += 1;
    if (s == 60) {
        s = 0;
        m += 1;
        if (m == 60) {
            m = 0;
            h += 1;
            if (h == 24) h = 0;
        }
    }

    // Escriptura variables de sortida
    if (h < 10) cout << 0;
    cout << h << ":";
    if (m < 10) cout << 0;
    cout << m << ":";
    if (s < 10) cout << 0;
    cout << s << endl;
}