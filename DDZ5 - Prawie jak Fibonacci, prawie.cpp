#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int amount, number, result = 0;
    vector<int> allNumbers;
    cin >> amount;
    while (amount--)
    {
        cin >> number;
        allNumbers.push_back(number);
    }
    for (int i = 0; i < allNumbers.size(); i++)
    {
        if (allNumbers[i + 2] == allNumbers[i] + allNumbers[i + 1])
        {
            result++;
        }
    }
    cout << result << endl;
}