#include "DCC200.h"
using namespace std;

int *subvector(int n, int *arr, int start, int end, int *sub_n)
{
	*sub_n = end - start + 1;
	int *sub_arr = new int[*sub_n];

	for (int i = 0; i < *sub_n; i++)
		sub_arr[i] = arr[start + i];

	return sub_arr;
}
