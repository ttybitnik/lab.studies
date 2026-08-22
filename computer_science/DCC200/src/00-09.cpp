#include "DCC200.h"
using namespace std;

float calculatePi(int n)
{
	float sum = 0, pi;
	int denominator = 1;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)
			sum += (1.0 / denominator);
		else
			sum -= (1.0 / denominator);
		denominator += 2;
	}

	return 4 * sum;
}
