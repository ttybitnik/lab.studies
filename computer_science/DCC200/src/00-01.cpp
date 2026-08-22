#include "DCC200.h"
using namespace std;

#ifdef INTERACTIVE
int main()
{
    int n;
    float number, sum = 0.0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> number;
        sum += number;
    }

    cout << fixed << setprecision(2);
    cout << sum / n << endl;

    return 0;
}
#endif
