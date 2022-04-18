#include <iostream>
using namespace std;
int main()
{
    string pesel;
    int sum = 0;
    int amount;
    cin >> amount;
    while (amount--)
    {
        cin >> pesel;
        pesel[10];
        sum = (pesel[0] * 1) + (pesel[1] * 3) + (pesel[2] * 7) + (pesel[3] * 9) + (pesel[4] * 1) + (pesel[5] * 3) +
              (pesel[6] * 7) + (pesel[7] * 9) + (pesel[8] * 1) + (pesel[9] * 3) + (pesel[10] * 1);
        if (pesel.length() == 11 && sum % 10 == 0)
        {
            cout << "D" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}   