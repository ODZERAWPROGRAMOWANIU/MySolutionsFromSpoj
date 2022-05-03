#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
void calculateCevian(double &a, double &b, double &c, double &d)
{
    double x = sqrt((((d * b * b) + (c * a * a)) / (c + d) - (c * d)));
    cout << fixed << setprecision(2) << x << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int amount;
    double a, b, c, d;
    cin >> amount;
    for (int i = 0; i < amount; ++i)
    {
        cin >> a >> b >> c >> d;

        calculateCevian(a, b, c, d);
    }
    return 0;
}
