#include <iostream>
using namespace std;
int main()
{
    int amount, liczbakotow, sila, wagapaczka, result;
    cin >> amount;
    while (amount--)
    {
        cin >> liczbakotow >> sila >> wagapaczka;
        result = liczbakotow * wagapaczka;
        if (result <= sila)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}