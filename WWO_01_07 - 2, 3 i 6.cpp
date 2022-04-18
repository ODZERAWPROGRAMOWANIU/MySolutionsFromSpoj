#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    for (int i = x; i <= y; i++)
    {
        if (i % 6 == 0)
        {
            cout << "ab";
        }
        if (i % 2 == 0 && i % 3 != 0)
        {
            cout << "a";
        }
        if (i % 3 == 0 && i % 2 != 0)
        {
            cout << "b";
        }
    }
    return 0;
}§