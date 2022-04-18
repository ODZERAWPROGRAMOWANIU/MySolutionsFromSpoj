#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, temp;
    int amount;
    cin >> amount;
    while (amount--)
    {
        cin >> a >> b;

        temp = (100 * (100 - a)) / 100;
        temp = temp * (100 - b) / 100;
        cout << fixed << setprecision(2) << 100 - temp << endl;
    }
    return 0;
}