#include "DCC200.h"
using namespace std;

void swap(int* a, int* b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

#ifdef INTERACTIVE
int main()
{
	int a = 1, b = 2;
	swap(&a, &b);
	cout << a << b << endl;

	return 0;
}
#endif // INTERACTIVE
