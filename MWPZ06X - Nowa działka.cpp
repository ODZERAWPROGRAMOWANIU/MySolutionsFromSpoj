#include <iostream>
using namespace std;
int main()
{
    int amount;
    int amount0fSteps;
    cin >> amount;
    while (amount--)
    {
        cin >> amount0fSteps;
        cout << amount0fSteps * amount0fSteps << endl;
    }
    return 0;
}