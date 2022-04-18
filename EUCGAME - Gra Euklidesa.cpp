#include <iostream>
using namespace std;
int main()
{
    int amount, x, y, result, result1;
    cin >> amount;
    while (amount--)
    {
        cin >> x >> y;
        while (x != y)
        {
            if (x > y)
            {
                x = x - y;
            }
            else
            {
                y = y - x;
            }
        }
        cout << x + x << endl;
    }
    return 0;
}