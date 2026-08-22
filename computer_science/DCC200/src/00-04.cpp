#include "DCC200.h"
using namespace std;

int findCharInString(string str, char ch)
{
	for (int i = 0; i < str.size(); i++)
		if (str[i] == ch) return i;

	return -1;
}
