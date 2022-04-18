#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, c, x;
    cin >> a >> b >> c;
    if (a != 0)
    {
        x = (c - b) / a;
        cout << fixed << setprecision(2) << x << endl;
    }
    if ((c - b) == 0)
    {
        cout << "NWR" << endl;
    }
    if (((c - b) != 0) && a == 0)
    {
        cout << "BR" << endl;
    }
    return 0;
}