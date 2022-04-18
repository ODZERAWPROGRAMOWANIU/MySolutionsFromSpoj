#include <iostream>
using namespace std;
int main()
{
    int amount, temp;
    string text1, text2;
    cin >> amount;
    while (amount--)
    {
        cin >> text1 >> text2;
        if (text1.length() > text2.length())
        {
            temp = text2.length();
        }
        else
        {
            temp = text1.length();
        }
        for (int k = 0; k < temp; k++)
        {
            cout << text1[k];
            cout << text2[k];
        }
        cout << endl;
    }
    return 0;
}