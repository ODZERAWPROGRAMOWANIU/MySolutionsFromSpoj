#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    set<int> allNumbersInSet;
    vector<int> mutualPart;
    vector<int> allNumbersInA;
    vector<int> allNumbersInB;
    int amountOfNumbersInFirstSet, amountOfNumbersInSecondSet, numbersA, numbersB;
    cin >> amountOfNumbersInFirstSet;
    while (amountOfNumbersInFirstSet--)
    {
        cin >> numbersA;
        allNumbersInSet.insert(numbersA);
        allNumbersInA.push_back(numbersA);
    }
    cin >> amountOfNumbersInSecondSet;
    while (amountOfNumbersInSecondSet--)
    {
        cin >> numbersB;
        allNumbersInSet.insert(numbersB);
        allNumbersInB.push_back(numbersB);
    }
    for (auto iter = allNumbersInSet.begin(); iter != allNumbersInSet.end(); ++iter)
    {
        cout << *iter << ' ';
    }
    cout << endl;

    for (int j = 0; j < allNumbersInB.size(); j++)
    {
        for (int i = 0; i < allNumbersInA.size(); i++)
        {
            if (allNumbersInB[j] == allNumbersInA[i])
            {
                mutualPart.push_back(allNumbersInB[j]);
            }
        }
    }

    if (mutualPart.size() == 0)
    {
        cout << "NULL" << endl;
    }
    sort(mutualPart.begin(), mutualPart.end());
    for (int k = 0; k < mutualPart.size(); k++)
    {
        cout << mutualPart[k] << " ";
    }
    cout << endl;
    return 0;
}