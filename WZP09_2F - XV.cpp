#include <iostream>
using namespace std;
int main()
{
    string number;
    int lastNumber, sum = 0, temp = 0;
    while (number != "0")
    {
        sum = 0;
        temp = 0;
        cin >> number;
        if (number == "0")
            break;
        for (int i = 0; i < number.length(); i++)
        {
            sum += (int)number[i] - 48;
        }
        if (sum % 3 == 0)
        {
            lastNumber = (int)number[number.length() - 1] - 48;
            if (lastNumber % 5 == 0)
                temp = 1;
        }
        if (temp == 1)
            cout << "TAK" << endl;
        else
        {
            cout << "NIE" << endl;
        }
    }
}