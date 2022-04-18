#include <iostream>
using namespace std;
int main()
{
    string text;
    int temp;
    getline(cin, text);
    for (int i = 0; i < text.length(); i += 2)
    {
        cout << text[i];
    }
    if (text.length() % 2 != 0)
    {
        temp = 2;
    }
    else
    {
        temp = 1;
    }
    for (int i = text.length() - temp; i > 0; i -= 2)
    {
        cout << text[i];
    }
}