#include <iostream>
using namespace std;
int main()
{
    string text;
    int counter = 1, amount;
    cin >> amount;
    while (amount--)
    {
        cin >> text;
        for (int j = 0; j < text.length(); j++)
        {
            if (text[j] == text[j + 1])
            {
                counter++;
            }
            else
            {
                if (counter < 2)
                {
                    cout << text[j];
                    counter = 1;
                }
                else if (counter == 2)
                {
                    cout << text[j - 1] << text[j];
                    counter = 1;
                }
                else
                {
                    cout << text[j] << counter;
                    counter = 1;
                }
            }
        }
        cout << endl;
    }
}