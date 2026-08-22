#include "DCC200.h"
using namespace std;

float calculateEuler()
{
    float x, sum = 1.0;
    int k = 1;
    float tolerance = abs(1.0 / factorial(k) - 1.0 / factorial(k + 1));
    cin >> x;

    while (tolerance >= x) {
        sum += 1.0 / factorial(k);
        tolerance = abs(1.0 / factorial(k) - 1.0 / factorial(k + 1));
        k++;
    }

    return sum;
}
