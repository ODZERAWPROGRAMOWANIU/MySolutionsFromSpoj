#include <iostream>
using namespace std;
int main()
{
    int amount;
    string text;
    cin >> amount;
    while (amount--)
    {
        cin >> text;
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == 65 || text[i] == 66 || text[i] == 67)
            {
                cout << "2";
            }
            if (text[i] == 68 || text[i] == 69 || text[i] == 70)
            {
                cout << "3";
            }
            if (text[i] == 71 || text[i] == 72 || text[i] == 73)
            {
                cout << "4";
            }
            if (text[i] == 74 || text[i] == 75 || text[i] == 76)
            {
                cout << "5";
            }
            if (text[i] == 77 || text[i] == 78 || text[i] == 79)
            {
                cout << "6";
            }
            if (text[i] == 80 || text[i] == 81 || text[i] == 82 || text[i] == 83)
            {
                cout << "7";
            }
            if (text[i] == 84 || text[i] == 85 || text[i] == 86)
            {
                cout << "8";
            }
            if (text[i] == 87 || text[i] == 88 || text[i] == 89 || text[i] == 90)
            {
                cout << "9";
            }
        }
        cout << endl;
    }
    return 0;
}