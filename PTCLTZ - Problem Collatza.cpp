#include <iostream>
using namespace std;
int collatz(int number, int counter)
{
    if (number == 1)
    {
        return counter;
    }
    else
    {
        if (number % 2 == 1)
            return collatz(3 * number + 1, ++counter);
        else
            return collatz(number / 2, ++counter);
    }
}
int main()
{
    int amount, number, result;
    cin >> amount;
    while (amount--)
    {
        cin >> number;
        result = collatz(number, 0);
        cout << result << endl;
    }
}