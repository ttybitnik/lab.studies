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

	float *arr1 = new float[n];
	float *arr2 = new float[n];

	cout << "Enter 1st vector data: ";
	for (int i = 0; i < n; i++)
		cin >> arr1[i];

	cout << "Enter 2nd vector data: ";
	for (int i = 0; i < n; i++)
		cin >> arr2[i];

	cout << "Dot product: " << dotProduct(n, arr1, arr2) << endl;

	delete[] arr1;
	delete[] arr2;
	return 0;
}
#endif // INTERACTIVE
