#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> valueOfTheGift;
    int number, result = 0, temp = 0;
    while (true)
    {
        cin >> number;
        if (number != 0)
        {
            valueOfTheGift.push_back(number);
        }
        else
        {
            break;
        }
    }
    sort(valueOfTheGift.begin(), valueOfTheGift.end());
    int counter = valueOfTheGift.size() - 1;
    result = valueOfTheGift[counter];
    if (result == valueOfTheGift[0])
    {
        cout << result << endl;
    }
    else
    {
        for (int i = valueOfTheGift.size() - 1; i >= 0; i--)
        {
            if (valueOfTheGift[i] != result)
            {
                cout << valueOfTheGift[i] << endl;
                break;
            }
        }
    }
}