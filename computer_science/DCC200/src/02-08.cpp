#include "DCC200.h"
using namespace std;

void aboveAverage(int n)
{
	cout << "Enter the numbers: ";
	int sum = 0, arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	float average = sum / (float)n;
	int above= 0, arr_aux[n];
	for (int i = 0; i < n; i++) {
		if (arr[i] > average) {
			arr_aux[above++] = arr[i];
		}
	}

	cout << "Above average: " << above << endl;

	for (int i = 0; i < above; i++)
		cout << arr_aux[i] << " ";
	cout << endl;
}
