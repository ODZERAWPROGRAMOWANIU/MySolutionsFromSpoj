#include <iostream>
using namespace std;
int main()
{
    int amount, numberToCompare;
    char mark;
    cin >> amount;
    long numbers[amount];
    for (int i = 0; i < amount; i++)
    {
        cin >> numbers[i];
    }
    cin >> mark >> numberToCompare;
    for (int j = 0; j < amount; j++)
    {
        if (mark == '>' && numbers[j] > numberToCompare)
        {
            cout << numbers[j] << endl;
        }
        if (mark == '<' && numbers[j] < numberToCompare)
        {
            cout << numbers[j] << endl;
        }
    }
}