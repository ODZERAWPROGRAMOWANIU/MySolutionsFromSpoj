#include <iostream>
using namespace std;
bool NWD(int a, int b, int nwd)
{
    int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    if (a == nwd)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int sumOfNumbers, nwdOfMysteryNumbers, temp, number1, number2, testCases;
    cin >> testCases;
    while (testCases--)
    {
        cin >> sumOfNumbers >> nwdOfMysteryNumbers;
        for (int i = 1; i <= sumOfNumbers; i++)
        {
            for (int j = 1; j <= sumOfNumbers; j++)
            {
                if (i + j == sumOfNumbers)
                {
                    if (NWD(i, j, nwdOfMysteryNumbers))
                    {
                        number1 = i;
                        number2 = j;
                        temp = 1;
                        break;
                    }
                    else
                    {
                        temp = 0;
                    }
                }
            }
            if (temp == 1)
            {
                break;
            }
        }
        if (temp == 1)
        {
            cout << number1 << " " << number2 << endl;
        }
        if (temp == 0)
        {
            cout << "0 0" << endl;
        }
        temp = 0;
        number1 = 0;
        number2 = 0;
    }
}