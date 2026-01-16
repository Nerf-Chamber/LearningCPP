#include "condicionals.h"
#include <iostream>

using namespace std;

/*
if (⟨Condició⟩) {
    ⟨Instruccions_SÍ⟩
} else {
    ⟨Instruccions_NO⟩
}
*/

void checkBiggerNumber(int number, int reference) {
    if (number > reference) {
        cout<<number<<" is greater than "<<reference<<endl;
    } else {
        cout<<number<<" is smaller or equal than "<<reference<<endl;
    }
    // Ternària LOL
    string response = number > reference ? "Yes, BIG" : "No, SMOL";
}

/*
Suposem que ara volem fer un programa que llegeixi dos nombres, i que n'escrigui el mínim i el màxim en una línia,
separats amb un espai.
*/

void writeMinMax() {
    int n, m; // Declaració variables d'entrada
    cin>>n>>m; // Lectura variables d'entrada

    int max, min; // Declaració variables de sortida

    // Càlcul variables de sortida
    if (n >= m) {max = n; min = m;}
    else {max = m; min = n;}

    // Escriptura variables de sortida
    cout<<max<<" "<<min<<endl;
}