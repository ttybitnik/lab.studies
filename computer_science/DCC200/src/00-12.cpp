#include "DCC200.h"
using namespace std;

float largestEvenValue(int n, float arr[])
{
	float largest;

	for (int i = 0; i < n; i++) {
		if (int(arr[i]) % 2 == 0) {
			largest = arr[i];
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		if (int(arr[i]) % 2 == 0 && arr[i] > largest)
			largest = arr[i];
	}

	return largest;
}
