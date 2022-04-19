#include <iostream>
#include <vector>
using namespace std;
int NWD(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}
int main()
{
    ios_base::sync_with_stdio(0);
    vector<int> allNumbers;
    vector<int> result;
    int amount, number;
    cin >> amount;
    while (amount--)
    {
        cin >> number;
        allNumbers.push_back(number);
    }
    for (int j = 0; j < allNumbers.size(); j++)
    {
        for (int i = 0; i < allNumbers.size(); i++)
        {
            cout << (NWD(allNumbers[j], allNumbers[i])) << " ";
        }
        cout << endl;
    }
}
