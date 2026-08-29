#include "DCC200.h"
using namespace std;

void reverse(int vet[], int n)
{
	int i = 0;
	int j = n - 1;
	while (i < j) {
		swap(vet+i, vet+j);
		j--;
		i++;
	}
}

#ifdef INTERACTIVE
int main()
{
	int vet_odd[5] = {0, 1, 2, 3, 4}, n_odd = 5;
	int vet_even[4] = {0, 1, 2, 3}, n_even = 4;

	reverse(vet_odd, n_odd);
	for (int i = 0; i < n_odd; i++)
		cout << vet_odd[i] << " ";

	cout << endl;

	reverse(vet_even, n_even);
	for (int i = 0; i < n_even; i++)
		cout << vet_even[i] << " ";

	cout << endl;

	return 0;
}
#endif // INTERACTIVE
