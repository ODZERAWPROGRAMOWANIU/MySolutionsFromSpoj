#include <iostream>
using namespace std;
int main()
{
    double delta, a, b, c;
    while (cin >> a >> b >> c)
    {
        delta = (b * b) - 4 * a * c;
        if (delta > 0)
        {
            cout << "2" << endl;
        }
        else if (delta == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}