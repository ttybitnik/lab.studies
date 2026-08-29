#include "DCC200.h"
using namespace std;

int *resize(int arr[], int n, int n_new)
{
	if (n_new <= n)
		return arr;

	int *n_arr = new int[n_new];

	for (int i = 0; i < n_new; i++) {
		if (i < n)
			n_arr[i] = arr[i];
		else
			n_arr[i] = 0;
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

	int n_new;
	cout << "Enter new vector size: ";
	cin >> n_new;

	int *n_arr = resize(arr, n, n_new);

	for (int i = 0; i < n_new; i++)
		cout << n_arr[i] << " ";
	cout << endl;

	delete[] arr;
	if (n_new > n) delete[] n_arr;
	return 0;
}
#endif // INTERACTIVE
