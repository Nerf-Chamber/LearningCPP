#include <dataTypesHeader.h>
#include <iostream>

using namespace std;

void operations() {
    char c = 'X';

    // REFERENTS A CODIS ASCII
    bool isUpperCase = c >= 'A' and c <= 'Z';
    bool isLetter = (c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z');

    // To upper case
    c = isLetter && !isUpperCase ? c - 'a' + 'A' : c;
    // To lower case
    c = isLetter && isUpperCase ? c - 'A' + 'a' : c;

    cout << c;
}