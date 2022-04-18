#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> numbers;
    int a, b, c, min, counter;
    cin >> a >> b >> c;
    numbers.push_back(a);
    numbers.push_back(b);
    numbers.push_back(c);
    sort(numbers.begin(), numbers.end());

    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers[0] == numbers[i])
        {
            counter = 0;
            break;
        }
        else
        {
            counter = 1;
        }
    }
    if (counter == 0)
    {
        cout << "NIE" << endl;
    }
    if (counter == 1)
    {
        if (numbers[0] == a)
        {
            cout << "TAK 1" << endl;
        }
        if (numbers[0] == b)
        {
            cout << "TAK 2" << endl;
        }
        if (numbers[0] == c)
        {
            cout << "TAK 3" << endl;
        }
    }

    return 0;
}