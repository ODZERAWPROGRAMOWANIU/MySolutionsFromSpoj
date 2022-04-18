#include <iostream>
using namespace std;
int main()
{
    int testCases, amountOfNumbers, numbers, temp = 0;
    cin >> testCases;
    while (testCases--)
    {
        cin >> amountOfNumbers;
        temp = 0;
        while (amountOfNumbers--)
        {
            cin >> numbers;
            temp ^= numbers;
        }
        cout << temp << endl;
    }
    return 0;
}