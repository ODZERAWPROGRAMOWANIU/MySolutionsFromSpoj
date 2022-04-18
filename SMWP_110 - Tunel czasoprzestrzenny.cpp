#include <iostream>
#include <iomanip>>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int x1, y1, amountOfGalaxies, x2, y2, xMax, yMax;
    double maxDistance = -1;
    cin >> x1 >> y1 >> amountOfGalaxies;
    while (amountOfGalaxies--)
    {
        cin >> x2 >> y2;
        double distanceFromMeToOtherGalaxy = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        if (distanceFromMeToOtherGalaxy > maxDistance)
        {
            maxDistance = distanceFromMeToOtherGalaxy;
            xMax = x2;
            yMax = y2;
        }
    }
    cout << xMax << " " << yMax << endl;
    cout << fixed << setprecision(2) << maxDistance << endl;
}