#include <iostream>
#include "helloWorld.h"
#include "littleProblem.h"
#include "secondsToHMS.h"

using namespace std;

int main() {
    int initialSeconds;
    cin >> initialSeconds;
    transformSecondsToHMS(initialSeconds);
    return 0;
}