#include "DCC200.h"
using namespace std;

int factorial(int n)
{
    if ( n == 0 | n == 1) return 1;

	int product = n;

	for (int i = n - 1; i > 1; i--)
		product *= i;

	return product;
}

#ifdef INTERACTIVE
int main()
{
	int n;
	cin >> n;

	cout << factorial(n) << endl;

	return 0;
}
#endif
