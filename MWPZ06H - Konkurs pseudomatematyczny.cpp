#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int amount, amountOfParticipans, amountOfPoints, maxValue = 0, counter = 0;
    vector<int> sortingPoints;
    cin >> amount;
    while (amount--)
    {
        cin >> amountOfParticipans;
        for (int i = 0; i < amountOfParticipans; i++)
        {
            cin >> amountOfPoints;
            sortingPoints.push_back(amountOfPoints);
            if (amountOfPoints > maxValue)
            {
                maxValue = amountOfPoints;
            }
        }
        sort(sortingPoints.begin(), sortingPoints.end());
        for (int i = sortingPoints.size() - 1; i >= 0; i--)
        {
            if (sortingPoints[i] == maxValue)
            {
                counter++;
                cout << sortingPoints[i] << " ";
            }
            else
            {
                break;
            }
        }
        for (int i = 0; i < sortingPoints.size() - counter; i++)
        {
            cout << sortingPoints[i] << " ";
        }
        counter = 0;
        maxValue = 0;
        amountOfPoints = 0;
        amountOfParticipans = 0;
        sortingPoints.clear();
        cout << endl;
    }
}