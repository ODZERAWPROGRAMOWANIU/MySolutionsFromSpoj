#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int windowDimensions, wiperRange, amountOfInsects, x, y, result = 0;
    cin >> windowDimensions >> wiperRange;
    cin >> amountOfInsects;
    while (amountOfInsects--)
    {
        cin >> x >> y;
        double fetchOfInsects = sqrt(pow(x - windowDimensions, 2) + pow(y - 0, 2));
        if (fetchOfInsects > wiperRange)
        {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}