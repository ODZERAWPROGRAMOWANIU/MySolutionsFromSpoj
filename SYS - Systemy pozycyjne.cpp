#include <iostream>
#include <cmath>
using namespace std;
string toEleven(int number)
{
    string n = "";
    int temp;
    int rest = number;
    for (int i = 5; i >= 0; i--)
    {
        temp = rest / pow(11, i);
        if (temp > 0 || n != "")
        {
            if (temp < 10)
            {
                n += to_string(temp);
            }
            else
            {
                n += 'A';
            }
        }
        rest = rest - (temp * pow(11, i));
    }
    return n;
}
int main()
{
    int amount, number;
    cin >> amount;
    while (amount--)
    {
        cin >> number;
        cout << uppercase << hex << number << " ";
        cout << toEleven(number) << endl;
    }
}