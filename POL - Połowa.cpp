#include <iostream>
using namespace std;
int main()
{
    string text;
    int half0fText;
    int amount;
    cin >> amount;
    while (amount--)
    {
        cin >> text;
        int lenghts = text.length();
        if (lenghts % 2 == 0)
        {
            half0fText = lenghts / 2;
            for (int i = 0; i <= half0fText - 1; i++)
            {
                cout << text[i];
            }
            cout << endl;
        }
    }
    return 0;
}