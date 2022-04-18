#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text;
    int counter = 0;
    while (cin >> text)
    {
        for (int i = 0; i < text.length(); i++)
        {
            if (i + 2 < text.length())
            {
                if (text[i] == '.' && text[i + 1] == '.' && text[i + 2] == '.')
                {
                    counter++;
                    i += 2;
                    continue;
                }
            }
            if (text[i] == '.' || text[i] == '?' || text[i] == '!')
            {
                counter++;
            }
        }
    }
    cout << counter << endl;
    return 0;
}