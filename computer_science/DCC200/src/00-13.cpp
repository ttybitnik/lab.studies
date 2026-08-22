#include "DCC200.h"
using namespace std;

void readNegatives(int n, float vet[])
{
	int i = 0;
	while(i < n) {
		float value;
		cin >> value;
		if (value < 0) {
			vet[i] = value;
			i++;
		}
	}
}
