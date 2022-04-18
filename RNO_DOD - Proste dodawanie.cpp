#include <iostream>
using namespace std;
int main()
{
    int amount, quantity, result = 0, numbers;
    cin >> amount;
    while (amount--)
    {
        cin >> quantity;
        while (quantity--)
        {
            cin >> numbers;
            result += numbers;
        }
        cout << result << endl;
        result = 0;
    }
    return 0;
}
