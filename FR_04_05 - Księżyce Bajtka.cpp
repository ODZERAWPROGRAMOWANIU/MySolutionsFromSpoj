#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int amount;
    double r1, r2;
    cin >> amount;
    while (amount--)
    {
        cin >> r1 >> r2;
        double result = 2 * (r1 * r2);
        cout << fixed << setprecision(2) << result << endl;
    }
}