#include "DCC200.h"
using namespace std;

#ifdef INTERACTIVE
int main()
{
	int* pt;
	cout << "pt address: " << &pt << endl;
	int x;
	cin >> x;
	pt = &x;
	cout << "pt content: " << pt << endl;
	cout << "x address: " << &x << endl;
	*pt *= 10;
	cout << "*pt *= 10: " << *pt << endl;
	pt += 10;
	cout << "pt += 10: " << pt << endl;

	return 0;
}
#endif // INTERACTIVE
