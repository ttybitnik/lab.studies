#include "DCC200.h"
using namespace std;

void reverse(int arr[], int n)
{
	int i = 0;
	int j = n - 1;
	while (i < j) {
		swap(arr+i, arr+j);
		j--;
		i++;
	}
}

#ifdef INTERACTIVE
int main()
{
	int arr_odd[5] = {0, 1, 2, 3, 4}, n_odd = 5;
	int arr_even[4] = {0, 1, 2, 3}, n_even = 4;

	reverse(arr_odd, n_odd);
	for (int i = 0; i < n_odd; i++)
		cout << arr_odd[i] << " ";

	cout << endl;

	reverse(arr_even, n_even);
	for (int i = 0; i < n_even; i++)
		cout << arr_even[i] << " ";

	cout << endl;

	return 0;
}
#endif // INTERACTIVE
