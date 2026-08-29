#include "DCC200.h"
using namespace std;

bool countAndClassifyNumbers(int n, int vet[], int *even, int *odd, int *negatives)
{
	*even = 0;
	*odd = 0;
	*negatives = 0;

	for (int i = 0; i < n; i++) {
		if (vet[i] % 2 == 0)
			(*even)++;
		else
			(*odd)++;

		if (vet[i] < 0) (*negatives)++;
	}

	return *negatives;
}
