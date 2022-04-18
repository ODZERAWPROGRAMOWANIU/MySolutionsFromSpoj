#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> result;
    int number, counter = 1;
    cin >> number;
    for (int i = 1; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            result.push_back(i);
        }
    }
    for (int i = result.size() - 1; i >= 0; i--)
    {
        if (number / result[i] != result[i])
        {
            result.push_back(number / result[i]);
        }
    }
    if (result.size() % 2 == 0)
    {
        cout << "NIE" << endl;
    }
    else
    {
        cout << "TAK" << endl;
    }
}
