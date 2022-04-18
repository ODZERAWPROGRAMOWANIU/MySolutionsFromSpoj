#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> result;
    char temp = 1;
    int positionOfZero, amountOfOnes = 0;
    string text, r = "";
    cin >> text;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == '0')
        {
            positionOfZero = i;
            break;
        }
    }
    for (int i = positionOfZero + 1; i < text.length(); i++)
    {
        if (text[i] == '1')
        {
            amountOfOnes++;
        }
    }

    for (int j = positionOfZero + 1; j < text.length(); j++)
    {
        result.push_back(text[j]);
        if (text[j] == '1')
        {
            amountOfOnes--;
        }
        if (amountOfOnes == 0)
        {
            break;
        }
    }
    for (int k = 0; k < result.size() - 1; k++)
    {
        r += result[k];
    }
    if (r.length() > 0)
    {
        cout << r << endl;
    }
    else
    {
        cout << "PUSTY" << endl;
    }
    return 0;
}
