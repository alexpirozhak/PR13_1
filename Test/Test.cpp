#include <iostream>
#include <math.h>
#include <iomanip>

#include "check.h"
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsCheck;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	CheckMyCondition();

	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << endl;
	
    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(8) << "x" << " |"
        << setw(17) << "log((x+1)/(x-1)" << " |"
        << setw(10) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;


    cout << "-------------------------------------------------" << endl;
    x = xp;

    while (x <= xk)
    {
        sum();
        cout << "|" << setw(8) << setprecision(2) << x << " |"
            << setw(17) << setprecision(5) << log((x + 1) / (x - 1)) << " |"
            << setw(10) << setprecision(5) << S << " |"
            << setw(5) << n << " |"
            << endl;
        x += dx;
    }

    cout << "-------------------------------------------------" << endl;
    return 0;
}