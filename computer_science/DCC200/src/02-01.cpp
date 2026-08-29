#include "DCC200.h"
using namespace std;

#ifdef INTERACTIVE
int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];

	float sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	cout << "Average: " << sum / n << endl;

	delete[] arr;
	return 0;
}
#endif // INTERACTIVE
