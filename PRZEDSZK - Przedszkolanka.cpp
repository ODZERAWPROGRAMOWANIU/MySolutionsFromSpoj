#include <iostream>
using namespace std;
int main()
{
    int amount;
    cin >> amount;
    while (amount--)
    {
        int number1, number2, iloczyn;
        cin >> number1 >> number2;
        iloczyn = number1 * number2;
        while (number1 != number2)
        {
            if (number1 > number2)
            {
                number1 = number1 - number2;
            }
            else
            {
                number2 = number2 - number1;
            }
        }
        cout << iloczyn / number1 << endl;
    }
}