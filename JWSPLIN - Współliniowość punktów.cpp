#include <iostream>
using namespace std;

int main()
{
    int amount, x, y, x1, y1, x2, y2, result;
    cin >> amount;
    while (amount--)
    {
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        result = x * y1 + y * x2 + x1 * y2 - (y1 * x2 + x * y2 + y * x1);
        if (result == 0)
        {
            cout << "TAK" << endl;
        }
        else
        {
            cout << "NIE" << endl;
        }
        result = 0;
    }
}