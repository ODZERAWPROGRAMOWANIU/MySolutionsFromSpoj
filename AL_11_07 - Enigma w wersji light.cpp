#include <iostream>
#include <algorithm>
using namespace std;
void decrypt(string &text)
{
    for (int i = 1; i < text.length(); i = i + 2)
    {
        swap(text[i - 1], text[i]);
    }

    cout << text << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string text;
    while (getline(cin, text))
    {
        decrypt(text);
    }
    return 0;
}