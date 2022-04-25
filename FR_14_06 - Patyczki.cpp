#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    vector<int> allSidesOfTriangles;
    int testCases, sidesOfTriangles, amountOfTriangles = 0;
    cin >> testCases;
    while (testCases--)
    {
        cin >> sidesOfTriangles;
        allSidesOfTriangles.push_back(sidesOfTriangles);
    }
    sort(allSidesOfTriangles.begin(), allSidesOfTriangles.end());
    for (int i = 0; i < allSidesOfTriangles.size(); i++)
    {
        int firstSide = allSidesOfTriangles[i];
        int secondSide = allSidesOfTriangles[i + 1];
        int thirdSide = allSidesOfTriangles[i + 2];
        int sum = firstSide + secondSide + thirdSide;
        if (sum / 3 == firstSide && sum / 3 == secondSide && sum / 3 == thirdSide)
        {
            amountOfTriangles++;
            i += 2;
        }
    }
    cout << amountOfTriangles << endl;
}