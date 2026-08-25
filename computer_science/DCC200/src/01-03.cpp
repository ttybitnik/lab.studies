#include "DCC200.h"
using namespace std;

#ifdef INTERACTIVE
int main()
{
	int x = 23;
	float y = 9.7;

	int* pt1 = &x;
	(*pt1)++;

	float* pt2 = &y;
	cout << "*pt1 + *pt2: " << *pt1 + *pt2 << endl;

	cout << "pt1 + 4 (16 bytes): " << pt1 + 4 << endl;

	float** pt3 = &pt2;

	(*pt3)++;

	cout << "&pt3: " << &pt3 << endl;
	cout << "pt3 (&pt2): " << pt3 << endl;
	cout << "&pt2: " << &pt2 << endl;

	return 0;
}
#endif
