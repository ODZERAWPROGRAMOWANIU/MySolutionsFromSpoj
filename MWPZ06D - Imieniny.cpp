#include <iostream>
using namespace std;
int main()
{
    int amount, kidsInClass, number0fSweets;
    cin >> amount;
    while (amount--)
    {
        cin >> kidsInClass >> number0fSweets;
        kidsInClass--;
        if (kidsInClass == 0 && number0fSweets > 0)
        {
            cout << "TAK" << endl;
            continue;
        }
        if (kidsInClass > number0fSweets)
        {
            cout << "TAK" << endl;
            continue;
        }
        if (number0fSweets == 0)
        {
            cout << "NIE" << endl;
            continue;
        }
        if (number0fSweets % kidsInClass > 0)
        {
            cout << "TAK" << endl;
            continue;
        }
        else
        {
            cout << "NIE" << endl;
        }
    }
    return 0;
}
