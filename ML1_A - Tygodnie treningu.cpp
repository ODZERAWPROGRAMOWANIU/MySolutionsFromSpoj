#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string text;
    int amount;
    int minTrainings[7], maxTrainings = 0;
    cin >> amount;
    maxTrainings = amount;
    minTrainings[0] = 0, minTrainings[1] = 0, minTrainings[2] = 0, minTrainings[3] = 0, minTrainings[4] = 0, minTrainings[5] = 0, minTrainings[6] = 0;
    while (amount--)
    {
        cin >> text;
        if (text == "pon")
        {
            minTrainings[0]++;
        }
        if (text == "wt")
        {
            minTrainings[1]++;
        }
        if (text == "sr")
        {
            minTrainings[2]++;
        }
        if (text == "czw")
        {
            minTrainings[3]++;
        }
        if (text == "pt")
        {
            minTrainings[4]++;
        }
        if (text == "sob")
        {
            minTrainings[5]++;
        }
        if (text == "niedz")
        {
            minTrainings[6]++;
        }
    }
    sort(minTrainings, minTrainings + 7);
    cout << minTrainings[6] << " " << maxTrainings << endl;
}