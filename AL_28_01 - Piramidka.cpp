#include <iostream>
using namespace std;
void pyramid(string &text, int &length)
{
    int temp = length - (length / 2);
    int a, b;
    a = b = length / 2;
    while (a > 0)
    {
        for (int i = 0; i < text.length(); i++)
        {
            if (i >= a && i <= b)
            {
                cout << text[i];
            }
            else
            {
                cout << ".";
            }
        }
        a--;
        b++;
        cout << endl;
    }
    cout << text << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int length;
    string text;
    cin >> length >> text;
    pyramid(text, length);
    return 0;
}