#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int testCases, amountOfPoints;
    double distance = 0;
    cin >> testCases;
    while (testCases--)
    {
        int x, y;
        cin >> amountOfPoints;
        cin >> x >> y;
        for (int i = 0; i < amountOfPoints - 1; i++)
        {
            int x1, y1;
            cin >> x1 >> y1;
            round(distance += sqrt(pow(x1 - x, 2) + pow(y1 - y, 2)));
            x = x1;
            y = y1;
        }
        cout << fixed << setprecision(2) << distance / 1000 << endl;
        distance = 0;
    }
    return 0;
}