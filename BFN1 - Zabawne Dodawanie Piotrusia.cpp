#include <iostream>
#include <algorithm>
using namespace std;
bool ifIsPalindrome(string text)
{
    string temp = "";
    temp = text;
    reverse(text.begin(), text.end());
    if (temp == text)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string text, temp = "";
    int text1, temp1, counter = 0, amount;
    cin >> amount;
    while (amount--)
    {
        cin >> text;
        while (ifIsPalindrome(text) == 0)
        {
            temp = text;
            reverse(text.begin(), text.end());
            text1 = stoi(text);
            temp1 = stoi(temp);
            text1 += temp1;
            text = to_string(text1);
            temp = "";
            text1 = 0;
            temp1 = 0;
            counter++;
        }

        cout << text << " " << counter << endl;
        counter = 0;
    }
}