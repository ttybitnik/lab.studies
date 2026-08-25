#include "DCC200.h"
using namespace std;

void division(int num, int div, int* q, int* r)
{
	*q = num / div;
	*r = num % div;
}
