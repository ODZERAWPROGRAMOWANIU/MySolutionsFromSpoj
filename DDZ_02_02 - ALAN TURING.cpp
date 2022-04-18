#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> result;
    int amount;
    string instructions, r = "";
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        char letterToAdd;
        int amountToDelete;
        cin >> instructions;
        if (instructions == "DODAJ")
        {
            cin >> letterToAdd;
            result.push_back(letterToAdd);
        }
        if (instructions == "USUN")
        {
            cin >> amountToDelete;
            if (amountToDelete < result.size())
            {
                while (amountToDelete--)
                {
                    result.pop_back();
                }
            }
            else
            {
                result.clear();
            }
        }
        if (instructions == "ZAMIEN")
        {
            cin >> letterToAdd;
            if (result.size() > 0)
            {
                result.pop_back();
                result.push_back(letterToAdd);
            }
        }
    }
    for (int j = 0; j < result.size(); j++)
    {

        r += result[j];
    }
    cout << r << endl;
    return 0;
}
