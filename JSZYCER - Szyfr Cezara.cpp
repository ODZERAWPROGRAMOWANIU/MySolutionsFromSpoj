
#include <iostream>
using namespace std;
int main()
{
    string text;
    while (getline(cin, text))
    {
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == 'X')
            {
                text[i] = 62;
            }
            if (text[i] == 'Y')
            {
                text[i] = 63;
            }
            if (text[i] == 'Z')
            {
                text[i] = 64;
            }
            if (text[i] != ' ')
            {
                text[i] += 3;
            }
        }
        cout << text << endl;
    }
}
