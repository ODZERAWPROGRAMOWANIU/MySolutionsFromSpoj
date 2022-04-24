#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int amount, MAX = 0;
    cin >> amount;
    while (amount--)
    {
        string text;
        cin >> text;
        for (int i = 0; i < text.length(); i++)
        {
            for (int j = 0; j < text.length(); j++)
            {
                int distance = abs(int(text[i]) - (text[j]));
                if (distance > MAX)
                {
                    MAX = distance;
                }
            }
        }

        cout << MAX << endl;
        MAX = 0;
    }
    return 0;
}