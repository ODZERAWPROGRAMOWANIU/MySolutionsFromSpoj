#include <iostream>
using namespace std;
void decrypt(string &text)
{
    for (unsigned int i = 0; i < text.length(); i = i + 2)
    {
        string temp = "";
        temp += text[i];
        temp += text[i + 1];
        int t = stoi(temp);
        if (t < 30)
        {
            t = t * 10 + (text[i + 2] - 48);
            i++;
        }
        cout << (char)t;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string text;
    cin >> text;
    decrypt(text);
    return 0;
}