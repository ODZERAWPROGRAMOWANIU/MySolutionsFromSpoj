#include <iostream>
#include <set>
using namespace std;
int main()
{
    int amount, temperature;
    set<int> allTemperatures;
    cin >> amount;
    while (amount--)
    {
        cin >> temperature;
        allTemperatures.insert(temperature);
    }
    cout << allTemperatures.size() << endl;
}