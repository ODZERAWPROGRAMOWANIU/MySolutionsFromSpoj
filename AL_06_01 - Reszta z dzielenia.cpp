#include <iostream>
using namespace std;
int main()
{
    int amount, number1, number2, result;
    cin >> amount;
    while (amount--)
    {
        cin >> number1 >> number2;
        result = number1 % number2;
        if (result < 0 && number2 > 0)
        {
            result += number2;
        }
        else if (result < 0 && number2 < 0)
        {
            result -= number2;
        }
        cout << result << endl;
    }
    return 0;
}