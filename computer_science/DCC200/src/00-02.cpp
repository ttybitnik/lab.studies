#include "DCC200.h"
using namespace std;

float readAndCalculateAverage(int n)
{
	float number, sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> number;
		sum += number;
	}

	return sum / n;
}
