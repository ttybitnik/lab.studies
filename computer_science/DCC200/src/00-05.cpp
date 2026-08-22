#include "DCC200.h"
using namespace std;

bool isPrime(int n)
{
	if (n == 1) return false;

	for (int i = n - 1; i > 1; i--)
		if (n % i == 0) return false;

	return true;
}
