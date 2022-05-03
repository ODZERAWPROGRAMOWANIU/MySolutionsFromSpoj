#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> allLetters;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string text, result = "";
    while (getline(cin, text))
    {
        allLetters.push_back(text[0]);
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == ' ')
            {
                allLetters.push_back(text[i + 1]);
            }
            if (text[i] == '.')
            {
                allLetters.push_back(text[i]);
            }
        }

        for (int j = 0; j < allLetters.size(); j++)
        {
            if (allLetters[j] != '.')
            {
                result += allLetters[j];
            }
            else
            {
                result += ' ';
            }
        }
        cout << result << endl;
        result = "";
        allLetters.clear();
    }
    return 0;
}