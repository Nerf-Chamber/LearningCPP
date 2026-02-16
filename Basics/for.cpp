#include<basicsHeader.h>
#include<iostream>

using namespace std;

void forExample() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) cout << i << endl;
}

// PROBLEMA: Escriure els nombres entre 1 i n i després els seus respectius quadrats
void forSquared() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) cout << i << endl;
    for (int i = 1; i <= n; i++) cout << i * i << endl;
}

// PROBLEMA: Suma de n nombres com a input
void forAddition() {
    int n;
    cin >> n;

    int suma = 0;
    for (int i = 0; i < n; i++) {
        int add;
        cin >> add;
        suma += add;
    }

    cout << suma << endl;
}