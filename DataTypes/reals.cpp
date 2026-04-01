#include <dataTypesHeader.h>
#include <iostream>

using namespace std;

// ANOTACIÓ: Format científic exemple - 5.125e9 = 5.125 * 10^9

// PROBLEMA: Volem escriure un programa que trobi quin és el valor que satisfà una equació de la
// forma ax + b = 0 amb a != 0 En aquest cas, les entrades són els valors d'a i de b i la sortida ha de
// ser el valor adient d'x

void eqFirstGrade() {
    double a, b;
    cin >> a >> b;
    cout << -b/a << endl;
}

void celciusToFahrenheit() {
    cout << "Celcius: ";
    double celcius;
    cin >> celcius;

    // Fixar el format de sortida
    cout.setf(ios::fixed);
    cout.precision(4);

    // Sortida
    cout << "Farenheit: " << 1.8*celcius + 32 << endl;
}

