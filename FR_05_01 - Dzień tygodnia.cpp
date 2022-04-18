#include <iostream>
using namespace std;
int main()
{
    int amount, number = 0, a = 0, suma = 0, temp = 0;
    string day;
    cin >> amount;
    while (amount--)
    {
        cin >> day >> number;
        if (day == "Pn")
        {
            a = 1;
        }
        if (day == "Wt")
        {
            a = 2;
        }
        if (day == "Sr")
        {
            a = 3;
        }
        if (day == "Cz")
        {
            a = 4;
        }
        if (day == "Pt")
        {
            a = 5;
        }
        if (day == "So")
        {
            a = 6;
        }
        if (day == "Nd")
        {
            a = 7;
        }
        suma = (a + number) % 7;
        if (suma == 0)
            suma = 7;
        if (suma == 1)
        {
            cout << "Pn" << endl;
        }
        if (suma == 2)
        {
            cout << "Wt" << endl;
        }
        if (suma == 3)
        {
            cout << "Sr" << endl;
        }
        if (suma == 4)
        {
            cout << "Cz" << endl;
        }
        if (suma == 5)
        {
            cout << "Pt" << endl;
        }
        if (suma == 6)
        {
            cout << "So" << endl;
        }
        if (suma == 7)
        {
            cout << "Nd" << endl;
        }
    }
    return 0;
}