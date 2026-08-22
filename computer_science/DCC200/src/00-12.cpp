#include "DCC200.h"
using namespace std;

float largestEvenValue(int n, float vet[])
{
	float largest;

	for (int i = 0; i < n; i++) {
		if (int(vet[i]) % 2 == 0) {
			largest = vet[i];
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		if (int(vet[i]) % 2 == 0 && vet[i] > largest)
			largest = vet[i];
	}

	return largest;
}
