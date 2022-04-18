#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int amount, amount1, numbers[101], i;
    float srednia = 0, suma = 0;
    float nb = numbers[0];
    cin >> amount;
    while (amount--)
    {
        cin >> amount1;
        for (i = 1; i <= amount1; i++)
        {
            cin >> numbers[i];
            suma += numbers[i];
        }
        srednia = suma / amount1;
        for (int k = 1; k <= amount1; k++)
        {
            if (abs(numbers[k] - srednia) < abs(nb - srednia))
            {
                nb = numbers[k];
            }
        }

        cout << nb << endl;
        nb = 0;
        suma = 0;
        srednia = 0;
    }
    return 0;
}
    