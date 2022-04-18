#include <iostream>
using namespace std;
int main()
{
    char znak;
    int a, b, rejestry[10];
    for (int i = 0; i < 10; i++)
        rejestry[i] = 0;
    while (cin >> znak >> a >> b)
    {
        switch (znak)
        {
        case 'z':
        {
            rejestry[a] = b;
            break;
        }
        case '+':
        {
            cout << (rejestry[a] + rejestry[b]) << endl;
            break;
        }
        case '-':
        {
            cout << (rejestry[a] - rejestry[b]) << endl;
            break;
        }
        case '*':
        {
            cout << (rejestry[a] * rejestry[b]) << endl;
            break;
        }
        case '/':
        {
            cout << (rejestry[a] / rejestry[b]) << endl;
            break;
        }
        case '%':
        {
            cout << (rejestry[a] % rejestry[b]) << endl;
            break;
        }
        }
    }
    return 0;
}