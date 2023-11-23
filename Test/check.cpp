#include <iostream>
#include "var.h"
#include "check.h"

using namespace std;
using namespace nsVar;

namespace nsCheck
{
    void CheckMyCondition()
    {
        while (true)
        {
            cout << "xp = "; cin >> xp;
            cout << "xk = "; cin >> xk;


            if (xk >= xp && (xp < -1 && xk < -1 || xp>1 && xk>1))
            {
                break;
            }
            cout << "enter the correct values" << endl;
        }
    }

};