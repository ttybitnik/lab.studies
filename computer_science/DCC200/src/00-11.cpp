#include "DCC200.h"
using namespace std;

void printArithmeticTable()
{
	int n;
	cin >> n;

	cout << "VAL\tSQR\tSQRT\tFACT" << endl;
	for (int i = 0; i < n; i++) {
        int value;
        cin >> value;

        cout << value << "\t"
		<< (value * value) << "\t"
		<< sqrt(value) << "\t"
		<< factorial(value) << endl;
    }
}
