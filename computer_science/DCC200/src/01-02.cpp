#include "DCC200.h"
using namespace std;

#ifdef INTERACTIVE
int main()
{
	int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;
	pti1 = &a;
	pti2 = &b;

	*pti1 = c;
	*pti2 = c;

	pti = &v[0];
	for (int i = 0; i < 3; i++)
		*(pti + i) = i + 1;

	for (int i = 0; i < 3; i++)
		cout << *(v + i) << " ";
	cout << "\na: " << a << "\nb: " << b << "\nc: " << c << endl;

	pti = &a;
	*pti = vet[0] + 99;

	v[0] = *pti1 + *pti2;
	v[1] = *pti2;
	*(v + 2) = *pti;

	(*pti2)++;
	(*(v + 1))--;

	for (int i = 0; i < 3; i++)
		cout << *(v + i) << " ";
	cout << "\na: " << a << "\nb: " << b << "\nc: " << c << endl;

	return 0;
}
#endif
