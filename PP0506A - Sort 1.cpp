#include <iostream>
#include <math.h>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<tuple<double, string, int, int> > v;
    int testCases, amountOfPoints;
    string name;
    int x, y;
    cin >> testCases;
    while (testCases--)
    {
        cin >> amountOfPoints;
        while (amountOfPoints--)
        {
            cin >> name >> x >> y;
            double distance = sqrt(pow(x - 0, 2) + pow(y - 0, 2));
            v.push_back(make_tuple(distance, name, x, y));
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << get<1>(v[i]) << " "
                 << get<2>(v[i]) << " "
                 << get<3>(v[i]) << "\n";
        }
        v.clear();
    }
    return 0;
}