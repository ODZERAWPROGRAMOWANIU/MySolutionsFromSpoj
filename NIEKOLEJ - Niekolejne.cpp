#include <iostream>
using namespace std;
int main()
{
    double number;
    cin >> number;
    if (number == 2 || number == 1)
    {
        cout << "NIE" << endl;
    }
    else if (number == 0)
    {
        cout << number << endl;
    }
    else
    {
        for (int i = 1; i <= number; i = i + 2)
        {
            cout << i << " ";
        }
        for (int i = 0; i <= number; i = i + 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}