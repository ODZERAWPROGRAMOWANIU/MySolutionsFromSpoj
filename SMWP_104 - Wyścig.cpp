#include <iostream>
using namespace std;
long long NwdAndNww(long long a, long long b)
{
    long long temp;
    while (b)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long nww(long long a, long long b)
{
    return (a * b) / NwdAndNww(a, b);
}
int main()
{
    long long amount, temp, result, time;
    cin >> amount >> time;
    temp = time;
    amount--;
    while (amount--)
    {
        cin >> time;
        temp = nww(temp, time);
    }
    cout << temp << endl;
}
