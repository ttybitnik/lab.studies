#include "DCC200.h"
using namespace std;

float readVectorAndCalculateAverage(int n, float arr[])
{
    float sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    return sum / n;
}
