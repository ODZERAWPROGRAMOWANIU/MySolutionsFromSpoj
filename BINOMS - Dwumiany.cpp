#include <iostream>
#include <math.h>
using namespace std;
double newton(double a, double b)
{
    double result = 1;
    for (int i = 1; i <= b; i++)
    {
        result = (result * (a - i + 1)) / i;
    }
    return result;
}
int main()
{
    int amount;
    double a, b, result;
    cin >> amount;
    while (amount--)
    {
        cin >> a >> b;
        result = newton(a, b);
        printf("%1.0f\n", result);
    }
    return 0;
}