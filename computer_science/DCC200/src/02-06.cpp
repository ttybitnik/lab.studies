#include "DCC200.h"
using namespace std;

void readValues(int n, int *sum, float *average, int *greatest, int *lowest)
{
    cout << "Enter number of values: ";
    cin >> n;

    int value;
    cout << "Enter values:\n";

    cin >> value;
    *sum = value;
    *greatest = value;
    *lowest = value;

    for (int i = 1; i < n; i++) {
        cin >> value;
        if (value > *greatest)
            *greatest = value;
        if (value < *lowest)
            *lowest = value;
        *sum += value;
    }

    *average = *sum / (float)n;
}
