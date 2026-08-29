#include "DCC200.h"
using namespace std;

int* evenIndexes(int vet[], int n)
{
	int* n_vet = new int[(n + 1) / 2 ];

	int n_i = 0;
	for (int i = 0; i < n; i += 2) {
		n_vet[n_i] = vet[i];
		n_i++;
	}

	return n_vet;
}

#ifdef INTERACTIVE
int main()
{
	int n;
	cout << "Enter vector size: ";
	cin >> n;

	int* vet = new int[n];

	cout << "Enter vector data: ";
	for (int i = 0; i < n; i++)
		cin >> vet[i];

	int* vet_even = evenIndexes(vet, n);

	for (int i = 0; i < (n + 1) / 2; i++)
		cout << vet_even[i] << " ";

	cout << endl;

	delete[] vet;
	delete[] vet_even;
	return 0;
}
#endif
