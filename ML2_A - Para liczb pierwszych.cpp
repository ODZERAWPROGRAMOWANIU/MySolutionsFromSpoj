#include <iostream>
#include <vector>
using namespace std;
bool ifNumberIsPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    vector<int> allPrimeNumbers;
    int testCases, number, number1, number2, temp;
    cin >> testCases;
    while (testCases--)
    {
        cin >> number;
        for (int i = 1; i <= number; i++)
        {
            if (ifNumberIsPrime(i))
            {
                allPrimeNumbers.push_back(i);
            }
        }

        for (int j = 0; j < allPrimeNumbers.size(); j++)
        {
            for (int k = 0; k < allPrimeNumbers.size(); k++)
            {
                int sum = allPrimeNumbers[j] + allPrimeNumbers[k];
                if (sum == number)
                {
                    number1 = allPrimeNumbers[j];
                    number2 = allPrimeNumbers[k];
                    temp = 1;
                    break;
                }
                else
                {
                    temp = 0;
                }
            }

            if (temp == 1)
            {
                break;
            }
        }
        if (temp == 1)
        {
            cout << "TAK " << number1 << " " << number2 << endl;
        }
        if (temp == 0)
        {
            cout << "NIE" << endl;
        }
        allPrimeNumbers.clear();
        temp = 0;
        number1 = 0;
        number2 = 0;
    }
}