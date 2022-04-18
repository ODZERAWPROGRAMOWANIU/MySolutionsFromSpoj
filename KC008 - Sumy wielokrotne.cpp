#include <iostream>
using namespace std;
int main()
{
    long long int number, sum = 0, sum1 = 0;
    while (cin >> number)
    {
        if (number != 0)
        {
            sum += number;
        }
        else
        {
            cout << sum << endl;
            sum1 += sum;
            sum = 0;
        }
    }
    cout << sum1 << endl;
    return 0;
}