#include <iostream>
using namespace std;
int nwd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    cout << a << endl;
    return a;
}
int main()
{
    int amount;
    int a, b;
    cin >> amount;
    while (amount--)
    {
        cin >> a >> b;
        nwd(a, b);
    }
    return 0;
}