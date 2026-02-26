#include<basicsHeader.h>
#include<iostream>

using namespace std;

// PROBLEMA: La Marta està jugant soleta amb les fitxes de dòmino del seu germà gran, l'Arnau. De fitxes en té moltes,
// i en pot tenir de repetides. A ella li agrada fer "trens" llargs, de forma que els números de les fitxes adjacents encaixin.
// Per exemple, ara ha fet el tren correcte 🁀🀼🁑🁒🁘🁍🀷. Però, a vegades, la Marta comet errors. Per exemple, el tren
// 🁃🁂🁈🁃🁅🁠 en té dos: la primera i la segona fitxa no encaixen, i la quarta i la cinquena tampoc.

// L'Arnau vol fer un programa que compti el nombre d'errors d'un tren donat. L'entrada consistirà en una seqüència de
// parells de nombres (entre el 0 i el 6) que representen les fitxes del tren. Per exemple, el tren 🁀🀼🁑🁒🁘🁍🀷 es representa
// amb 2 1 1 4 4 4 4 5 5 4 4 0 0 6. Aquí, suposarem que tots els trens tenen almenys una fitxa. Per exemple, la seqüència 3 2
// representa el tren amb una sola fitxa (i, per tant, correcte) 🁈

void domino() {
    int errors = 0;
    int primer;
    cin >> primer;

    int dret, esquerre;
    while (cin >> dret >> esquerre) {
        if (dret != esquerre) ++errors;
    }

    cout << errors << endl;
}

// Que l'input estigui dintre d'un rang no està contemplat lol