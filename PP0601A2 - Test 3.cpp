#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    int numbers, temp = 0;

    while (cin >> numbers)
    {
        if (numbers == 42 && temp == 1)
        {
            counter++;
        }
        if (numbers != 42)
        {
            temp = 1;
            cout << numbers << endl;
        }
        else
        {
            temp = 0;
            cout << numbers << endl;
        }
        if (counter == 3)
        {
            break;
        }
    }
}