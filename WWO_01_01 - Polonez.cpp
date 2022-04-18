#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int amount, amount1, amount2;
    string name;
    int woman = 0, man = 0;
    cin >> amount >> amount1 >> amount2;
    for (int i = 1; i <= amount; i++)
    {
        cin >> name;
        reverse(name.begin(), name.end());
        if (name[0] == 'a')
        {
            woman++;
        }
        else
        {
            man++;
        }
    }
    for (int i = 1; i <= amount1; i++)
    {
        cin >> name;
        reverse(name.begin(), name.end());
        if (name[0] == 'a')
        {
            woman++;
        }
        else
        {
            man++;
        }
    }
    for (int i = 1; i <= amount2; i++)
    {
        cin >> name;
        reverse(name.begin(), name.end());
        if (name[0] == 'a')
        {
            woman++;
        }
        else
        {
            man++;
        }
    }
    if (man < woman)
    {
        cout << man << endl;
    }
    else
    {
        cout << woman << endl;
    }
}