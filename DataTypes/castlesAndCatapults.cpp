#include <dataTypesHeader.h>
#include <iostream>

using namespace std;

// PROBLEMA: Un castell medieval està assetjat. Disposem dels valors de l'alçada de les muralles, i també de l'alçada
// de les escales dels atacants. A més, sabem si els atacants tenen o no catapultes, i quantes pedres grosses poden disparar
// Les regles que regeixen l'èxit de l'atac són:
// - Si els atacants tenen escales més altes que les muralles del castell, l'atac té èxit.
// - Si els atacants tenen alguna catapulta i almenys deu pedres grosses, l'atac té èxit.

void castlesAndCatapults(double wallsHeigh, double stairsHeight, bool areThereCatapults, int rocksToThrow) {
    bool success = (stairsHeight > wallsHeigh) || (areThereCatapults && rocksToThrow >= 10);
    cout << success << endl;
}