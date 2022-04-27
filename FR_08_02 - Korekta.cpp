#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);

    int amount;
    int winStas, lossStas, winWies, lossWies, winGrzes, lossGrzes;
    cin >> amount;
    while (amount--)
    {
        cin >> winStas >> lossStas >> winWies >> lossWies >> winGrzes >> lossGrzes;
        int allWins = winStas + winWies + winGrzes;
        int allLoses = lossStas + lossWies + lossGrzes;
        int allMatches = (winStas + lossStas) * 4;
        cout << (allMatches / 2) - allWins << " " << (allMatches / 2) - allLoses << endl;
    }
}