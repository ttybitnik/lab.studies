#include "DCC200.h"
using namespace std;

#ifdef INTERACTIVE
int main()
{
	int n;
	cout << "Enter matrix order: ";
	cin >> n;

	int** mat = new int*[n];
	for (int i = 0; i < n; i++)
        mat[i] = new int[n];

	cout << "Enter matrix data:\n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> mat[i][j];

	cout << "Matrix: " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << "\t";
		cout << endl;
	}

	for (int i = 0; i < n; i++)
        delete[] mat[i];
	delete[] mat;
}
#endif // INTERACTIVE
