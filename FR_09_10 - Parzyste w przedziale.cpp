#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool ifGivenNumberIsEven(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    int amount, number1, number2;
    vector<int> evenNumbers;
    cin >> amount;
    while (amount--)
    {
        evenNumbers.clear();
        cin >> number1 >> number2;
        for (int i = number1 + 1; i < number2; i++)
        {
            if (ifGivenNumberIsEven(i))
            {
                evenNumbers.push_back(i);
            }
            sort(evenNumbers.begin(), evenNumbers.end());
        }
        if (evenNumbers.size() < 1)
        {
            cout << "BRAK";
        }
        for (int i = 0; i < evenNumbers.size(); i++)
        {
            cout << evenNumbers[i] << " ";
        }
        cout << endl;
    }
    return 0;
}