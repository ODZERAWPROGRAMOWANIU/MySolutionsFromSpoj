#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<double> sidesOfFirstTriangle;
    vector<double> sidesOfSecondTriangle;
    int amount, temp = 0;
    double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
    cin >> amount;
    while (amount--)
    {
        temp = 0;
        sidesOfFirstTriangle.clear();
        sidesOfSecondTriangle.clear();
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        cin >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
        double side = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        sidesOfFirstTriangle.push_back(side);
        side = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
        sidesOfFirstTriangle.push_back(side);
        side = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        sidesOfFirstTriangle.push_back(side);

        side = sqrt(pow(x5 - x4, 2) + pow(y5 - y4, 2));
        sidesOfSecondTriangle.push_back(side);
        side = sqrt(pow(x6 - x4, 2) + pow(y6 - y4, 2));
        sidesOfSecondTriangle.push_back(side);
        side = sqrt(pow(x6 - x5, 2) + pow(y6 - y5, 2));
        sidesOfSecondTriangle.push_back(side);
        sort(sidesOfSecondTriangle.begin(), sidesOfSecondTriangle.end());
        sort(sidesOfFirstTriangle.begin(), sidesOfFirstTriangle.end());
        for (int i = 0; i < sidesOfSecondTriangle.size(); i++)
        {
            if (sidesOfSecondTriangle[i] == sidesOfFirstTriangle[i])
            {
                temp++;
            }
        }
        if (temp == 3)
        {
            cout << "TAK" << endl;
        }
        if (temp != 3)
        {
            cout << "NIE" << endl;
        }
    }
}