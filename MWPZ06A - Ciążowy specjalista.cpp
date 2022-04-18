#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int amount, x, y, z, temp, temp1;
    double result;
    cin >> amount;
    while (amount--)
    {
        cin >> x >> y >> z;
        temp = x + y;
        temp1 = y * z;
        result = double(temp - temp1) / double(z - 1);
        result *= -12;
        cout << round(result) << endl;
    }
}