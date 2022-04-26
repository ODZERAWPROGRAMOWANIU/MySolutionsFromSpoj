#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<char> allLettersToCompare;
    vector<char> lettersFromTestCases;
    ios_base::sync_with_stdio(0);
    string wordToCompare, testWord;
    int testCases, amountOfAnagrams = 0, temp = 0;
    cin >> wordToCompare >> testCases;
    for (int i = 0; i < wordToCompare.length(); i++)
    {
        allLettersToCompare.push_back(wordToCompare[i]);
    }
    sort(allLettersToCompare.begin(), allLettersToCompare.end());
    while (testCases--)
    {
        cin >> testWord;
        for (int a = 0; a < testWord.length(); a++)
        {
            lettersFromTestCases.push_back(testWord[a]);
        }
        sort(lettersFromTestCases.begin(), lettersFromTestCases.end());
        if (allLettersToCompare.size() == lettersFromTestCases.size())
        {
            for (int m = 0; m < allLettersToCompare.size(); m++)
            {
                if (lettersFromTestCases[m] == allLettersToCompare[m])
                {
                    temp++;
                }
            }
        }
        else
        {
            temp = 0;
        }
        if (temp == allLettersToCompare.size())
        {
            amountOfAnagrams++;
        }

        temp = 0;
        lettersFromTestCases.clear();
    }
    cout << amountOfAnagrams << endl;
}