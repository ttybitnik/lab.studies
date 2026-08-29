#include "DCC200.h"
using namespace std;

float dotProduct(int n, float x[], float y[])
{
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum += x[i] * y[i];

	return sum;
}

#ifdef INTERACTIVE
int main()
{
	int n;
	cout << "Enter vectors size: ";
	cin >> n;

	float* vet1 = new float[n];
	float* vet2 = new float[n];

	cout << "Enter 1st vector data: ";
	for (int i = 0; i < n; i++)
		cin >> vet1[i];

	cout << "Enter 2nd vector data: ";
	for (int i = 0; i < n; i++)
		cin >> vet2[i];

	cout << "Dot product: " << dotProduct(n, vet1, vet2) << endl;

	delete[] vet1;
	delete[] vet2;
	return 0;
}
#endif
