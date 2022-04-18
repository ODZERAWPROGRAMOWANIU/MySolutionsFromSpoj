#include <iostream>
using namespace std;
int main()
{
    int endings[10][4] = {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {6, 2, 4, 8},
        {1, 3, 9, 7},
        {6, 4, 6, 4},
        {5, 5, 5, 5},
        {6, 6, 6, 6},
        {1, 7, 9, 3},
        {6, 8, 4, 2},
        {1, 9, 1, 9}};
    unsigned long int base0fExponentation, exponent;
    int amount;
    cin >> amount;
    while (amount--)
    {
        cin >> base0fExponentation >> exponent;
        cout << endings[base0fExponentation % 10][exponent % 4] << endl;
    }
    return 0;
}
