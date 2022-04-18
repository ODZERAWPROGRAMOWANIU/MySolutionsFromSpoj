#include <iostream>
using namespace std;
int main()
{
    int number1, number2, result;
    char sign;
    while (cin >> sign >> number1 >> number2)
    {
        switch (sign)
        {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;
        case '%':
            result = number1 % number2;
            break;
        }
        cout << result << endl;
    }
    return 0;
}