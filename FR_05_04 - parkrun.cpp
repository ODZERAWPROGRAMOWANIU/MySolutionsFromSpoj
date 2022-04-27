#include <iostream>
#include <vector>
using namespace std;
int convertTimeToSec(string time)
{
    int result;

    result = atoi(time.substr(0, time.find(":")).c_str()) * 60;
    result += atoi(time.substr(time.find(":") + 1).c_str());

    return result;
}
int main()
{
    ios_base::sync_with_stdio(0);

    vector<string> bestPlayer;
    int amount, bestTime = 0;
    string firstNameOfPlayer, secondNameOfPlayer, timeOfPlayer;
    cin >> amount;
    cin >> firstNameOfPlayer >> secondNameOfPlayer >> timeOfPlayer;
    bestTime = convertTimeToSec(timeOfPlayer);
    amount--;
    while (amount--)
    {
        cin >> firstNameOfPlayer >> secondNameOfPlayer >> timeOfPlayer;
        int temp = convertTimeToSec(timeOfPlayer);
        if (temp < bestTime)
        {
            bestTime = temp;
            bestPlayer.clear();
            bestPlayer.push_back(firstNameOfPlayer + " " + secondNameOfPlayer);
        }
        else if (temp == bestTime)
        {
            bestPlayer.push_back(firstNameOfPlayer + " " + secondNameOfPlayer);
        }
    }
    for (int i = 0; i < bestPlayer.size(); i++)
    {
        cout << bestPlayer[i] << endl;
    }
    return 0;
}