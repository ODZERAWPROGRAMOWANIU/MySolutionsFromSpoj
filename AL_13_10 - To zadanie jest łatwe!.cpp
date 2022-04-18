#include <iostream>
using namespace std;
int main()
{
    int amount, result = 0;
    cin >> amount;
    string t, t1;
    while (amount--)
    {
        result = 0;
        cin >> t >> t1;
        for (int j = 0; j < t1.length(); j++)
        {
            for (int i = j; i < t.length(); i++)
            {
                if (t1[j] == t[i])
                {
                    result++;
                    j++;
                    continue;
                }
            }
        }
        if (result == t1.length())
        {
            cout << "Tak" << endl;
        }
        else
        {
            cout << "Nie" << endl;
        }
    }
}