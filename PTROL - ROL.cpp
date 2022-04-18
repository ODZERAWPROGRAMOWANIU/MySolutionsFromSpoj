#include <iostream>
using namespace std;
int main()
{
    int amount;
    int amount0fNumbers;
    int numbers[100];
    cin >> amount;
    while (amount--)
    {
        cin >> amount0fNumbers;
        for (int i = 0; i < amount0fNumbers; i++)
            cin >> numbers[i];
        for (int i = 1; i < amount0fNumbers; i++)
            cout << numbers[i] << " ";
        cout << numbers[0] << endl;
    }
    return 0;
}
