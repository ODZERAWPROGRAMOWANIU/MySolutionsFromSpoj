#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> marksWithoutSpaces;
    string text, result = "";
    while (getline(cin, text))
    {
        for (int i = 0; i < text.size(); i++)
        {

            if (text[i] == ' ')
            {
                if (text[i + 1] >= 97 && text[i + 1] <= 122)
                {
                    text[i + 1] -= 32;
                }
            }
            if (text[i] != ' ')
            {
                marksWithoutSpaces.push_back(text[i]);
            }
        }

        for (int j = 0; j < marksWithoutSpaces.size(); j++)
        {
            result += marksWithoutSpaces[j];
        }

        cout << result << endl;
        result = "";
        marksWithoutSpaces.clear();
    }
}