#include "DCC200.h"
using namespace std;

float sumPowers(float x, int n)
{
	float sum = 0;

	for (int i = 0; i <= n; i++)
		sum += pow(x, i);

	return sum;
}

#ifdef INTERACTIVE
int main()
{
	float x;
	int n;
	cin >> x >> n;

 	cout << sumPowers(x, n) << endl;

	return 0;
}
#endif
