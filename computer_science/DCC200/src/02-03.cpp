#include "DCC200.h"
using namespace std;

int *evenIndexes(int arr[], int n)
{
	int *n_arr = new int[(n + 1) / 2 ];

	int n_i = 0;
	for (int i = 0; i < n; i += 2) {
		n_arr[n_i] = arr[i];
		n_i++;
	}

	return n_arr;
}

#ifdef INTERACTIVE
int main()
{
	int n;
	cout << "Enter vector size: ";
	cin >> n;

	int *arr = new int[n];

	cout << "Enter vector data: ";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int *arr_even = evenIndexes(arr, n);

	for (int i = 0; i < (n + 1) / 2; i++)
		cout << arr_even[i] << " ";

	cout << endl;

	delete[] arr;
	delete[] arr_even;
	return 0;
}
#endif // INTERACTIVE
