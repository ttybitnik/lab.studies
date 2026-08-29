#include "DCC200.h"
using namespace std;

int *intercalate(int n, int v1[], int v2[])
{
	int *arr = new int[n * 2];

	for (int i = 0; i < n; i++) {
		*(arr + (i * 2))     = *(v1 + i);
		*(arr + (i * 2 + 1)) = *(v2 + i);
	}

	return arr;
}
