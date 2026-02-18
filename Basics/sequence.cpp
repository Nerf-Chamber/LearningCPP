#include<basicsHeader.h>
#include <iostream>

using namespace std;

void sequence() {
    int suma = 0;
    int x;

    // Nova instrucció
    // Llegir num de nums indefinit
    while (cin >> x) suma += x;
    cout << suma << endl;
}