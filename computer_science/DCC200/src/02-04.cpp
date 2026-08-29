#include "DCC200.h"
using namespace std;

int* resize(int vet[], int n, int n_new)
{
	if (n_new <= n)
		return vet;

	int* n_vet = new int[n_new];

	for (int i = 0; i < n_new; i++) {
		if (i < n)
			n_vet[i] = vet[i];
		else
			n_vet[i] = 0;
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

	int n_new;
	cout << "Enter new vector size: ";
	cin >> n_new;

	int* n_vet = resize(vet, n, n_new);

	for (int i = 0; i < n_new; i++)
		cout << n_vet[i] << " ";
	cout << endl;

	delete[] vet;
	if (n_new > n) delete[] n_vet;
	return 0;
}
#endif
