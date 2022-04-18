#include <iostream>
using namespace std;
int main()
{
    int amount, amount0fNumbers, counters, numbers[101];
    cin >> amount;
    while (amount--)
    {
        cin >> amount0fNumbers;
        for (counters = 1; counters <= amount0fNumbers; counters++)
        {
            cin >> numbers[counters];
        }
        for (counters = 1; counters <= amount0fNumbers; counters++)
        {
            if (counters % 2 == 0)
            {
                cout << numbers[counters] << " ";
            }
        }
        for (counters = 1; counters <= amount0fNumbers; counters++)
        {
            if (counters % 2 != 0)
            {
                cout << numbers[counters] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}