#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int xCircle, yCircle, radius, amountOfPoints, x, y, radius2;
    int distance;
    cin >> xCircle >> yCircle >> radius;
    radius2 = pow(radius, 2);
    cin >> amountOfPoints;
    while (amountOfPoints--)
    {
        cin >> x >> y;
        distance = pow(x - xCircle, 2) + pow(y - yCircle, 2);
        if (distance == radius2)
        {
            cout << "E" << endl;
        }
        if (distance > radius2)
        {
            cout << "O" << endl;
        }
        if (distance < radius2)
        {
            cout << "I" << endl;
        }
        distance = 0;
    }
    return 0;
}