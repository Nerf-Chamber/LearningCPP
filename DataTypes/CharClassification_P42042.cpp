#include <dataTypesHeader.h>
#include <iostream>

using namespace std;

// PROBLEMA: escriure un programa que llegeixi una lletra i que indiqui si és una majúscula, si és una minúscula,
// si és una vocal, i si és una consonant.

void charClassification() {
    // INPUT
    char c;
    cin >> c;

    // "CÀLCULS" I OUTPUT
    if (c >= 'A' && c <= 'Z') cout << "uppercase" << endl;
    else cout << "lowercase" << endl;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') cout << "vowel" << endl;
    else cout << "consonant" << endl;
}