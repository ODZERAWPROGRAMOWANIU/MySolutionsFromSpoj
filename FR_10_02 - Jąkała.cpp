#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int amount;
    string text;
    string::iterator it;
    vector<char> allMarks;
    char mark;
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        cin >> mark;
        allMarks.push_back(mark);
    }
    cin >> text;
    for (int j = 0; j < text.length(); j++)
    {
        for (int k = 0; k < allMarks.size(); k++)
        {
            if (text[j] == allMarks[k])
            {
                it = text.insert(text.begin() + j, allMarks[k]);
                k++;
                j++;
            }
        }
    }
    cout << text << endl;
}