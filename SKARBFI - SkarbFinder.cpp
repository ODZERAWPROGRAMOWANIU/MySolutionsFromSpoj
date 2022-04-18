#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int amount, amountOfAdvices, direction, steps, result1 = 0, result2 = 0;
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        cin >> amountOfAdvices;
        for (int i = 0; i < amountOfAdvices; i++)
        {
            cin >> direction >> steps;
            switch (direction)
            {
            case 0:
                result1 += steps;
                break;
            case 1:
                result1 -= steps;
                break;
            case 2:
                result2 += steps;
                break;
            case 3:
                result2 -= steps;
                break;
            }
        }
        if (result1 != 0 || result2 != 0)
        {
            if (result1 > 0)
            {
                cout << "0 " << result1 << endl;
            }
            else if (result1 < 0)
            {
                cout << "1 " << abs(result1) << endl;
            }
            if (result2 > 0)
            {
                cout << "2 " << result2 << endl;
            }
            else if (result2 < 0)
            {
                cout << "3 " << abs(result2) << endl;
            }
        }
        else
        {
            cout << "studnia" << endl;
        }
        result1 = 0;
        result2 = 0;
    }
    return 0;
}