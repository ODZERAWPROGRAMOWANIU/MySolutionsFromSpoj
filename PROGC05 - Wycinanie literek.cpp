#include <iostream>
using namespace std;
int main()
{
    char mark;
    string text;
    while (cin >> mark >> text)
    {
        for (size_t i = 0; i < text.length(); i++)
        {
            if (text[i] != mark)
            {
                cout << text[i];
            }
        }
        cout << endl;
    }
    return 0;
}