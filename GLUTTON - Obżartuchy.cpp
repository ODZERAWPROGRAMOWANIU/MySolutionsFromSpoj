#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int guests, cookiesInBox;
    double time, secInDay;
    double amountOfEatenCookies = 0;
    secInDay = 60 * 60 * 24;
    int amount;
    cin >> amount;
    while (amount--)
    {
        cin >> guests >> cookiesInBox;
        for (int i = 0; i < guests; i++)
        {
            cin >> time;

            amountOfEatenCookies += floor(secInDay / time);
        }
        cout << ceil(amountOfEatenCookies / cookiesInBox) << endl;
        amountOfEatenCookies = 0;
        time = 0;
    }
}