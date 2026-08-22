#include "DCC200.h"
using namespace std;

float readVectorAndCalculateAverage(int n, float vet[])
{
    float sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> vet[i];
        sum += vet[i];
    }

    return sum / n;
}
