#include "DCC200.h"
using namespace std;

#ifdef INTERACTIVE
int main()
{
	bool X, Y, Z;
	cin >> X >> Y >> Z;

	bool result_1, result_2;
	result_1 = (X && Y) || (X && !Z);
	result_2 = (X || Y) && (!X && Z);

	return 0;
}
#endif // INTERACTIVE
