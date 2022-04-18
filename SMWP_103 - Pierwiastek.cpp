#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    double number, result;
    int amount;
    cin >> amount;
    while (amount--)
    {
        cin >> number;
        result = sqrt(number);
        if (number > 0 && (result == (int)result))
        {
            cout << "TAK" << endl;
        }
        else
        {
            cout << "NIE" << endl;
        }
    }
}