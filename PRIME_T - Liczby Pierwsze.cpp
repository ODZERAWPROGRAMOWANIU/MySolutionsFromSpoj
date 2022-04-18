#include <iostream>
using namespace std;
bool isNumberPrime(int number)
{
    if (number < 2)
    {
        return false;
    }
    for (int i = 2; i < number; i++)
        if (number % i == 0)
        {
            return false;
        }
    return true;
}
int main()
{
    int amount;
    int number;
    cin >> amount;
    while (amount--)
    {
        cin >> number;
        if (isNumberPrime(number))
        {
            cout << "TAK" << endl;
        }
        else
        {
            cout << "NIE" << endl;
        }
    }
    return 0;
}