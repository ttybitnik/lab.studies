#include "DCC200.h"
using namespace std;

int *extract(int *n, int **arr, int start, int end, int *sub_n)
{
	*sub_n = end - start + 1;
	int *sub_arr = new int[*sub_n];

	int remainder_n = *n - *sub_n;
	int *remainder_arr = new int[remainder_n];

	for (int i = 0; i < *sub_n; i++)
		// *(sub_arr + i) = *(*arr + start + i);
		sub_arr[i] = (*arr)[start + i];

	for (int i = 0, m = 0; i < *n; i++) {
		if (i < start)
			remainder_arr[m++] = (*arr)[i];
		else if (i > end)
			remainder_arr[m++] = (*arr)[i];
	}

	delete[] *arr;
	*arr = remainder_arr;
	*n = remainder_n;

	return sub_arr;
}
