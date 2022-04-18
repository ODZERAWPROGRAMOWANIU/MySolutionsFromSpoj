#include <iostream>
#include <iomanip>
using namespace std;
double calculateTheArea0fCircle(double r, double d)
{
    d = d / 2;
    double are0fTheCircle;
    double const PI = 3.141592654;
    double rSearched;
    rSearched = -1 * ((d * d) - (r * r));
    are0fTheCircle = rSearched * PI;
    cout << fixed << setprecision(2) << are0fTheCircle;
    return are0fTheCircle;
}
int main()
{
    double r, d;
    cin >> r >> d;
    calculateTheArea0fCircle(r, d);
}
