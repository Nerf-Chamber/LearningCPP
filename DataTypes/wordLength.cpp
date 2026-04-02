#include<dataTypesHeader.h>
#include<iostream>

using namespace std;

// PROBLEMA: Donat un poema, suposem que estem interessats a saber quina n'és la paraula més llarga, quantes paraules
// conté, i quina n'és la llargada mitjana (en nombre de lletres).

void wordLength() {
    int wordCounter = 0;
    int wordsLengthAddition = 0;

    string longestWord;
    string word;
    while (cin >> word) {
        wordCounter++;
        wordsLengthAddition += word.size();

        if (word.size() > longestWord.size()) { longestWord = word; }
    }
    cout << "Num words: " << wordCounter << endl;
    cout << "Average chars in word: " << (double)wordsLengthAddition/wordCounter << endl;
    cout << "Longest word: " << longestWord << endl;
}