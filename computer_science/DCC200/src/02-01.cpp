#include "DCC200.h"
using namespace std;

#ifdef INTERACTIVE
int main()
{
	int n;
	cin >> n;
	int* vet = new int[n];

	float sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> vet[i];
		sum += vet[i];
	}

	cout << "Average: " << sum / n << endl;

	delete[] vet;
	return 0;
}
#endif // INTERACTIVE
