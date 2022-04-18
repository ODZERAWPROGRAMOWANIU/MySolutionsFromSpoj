#include <iostream>
using namespace std;
int main() {
    int number, amount, counters = 0;
    while (cin >> number >> amount)
    {
        for (int i = 0; i < amount; i++)
        {
            int temp[1000];
            cin >> temp [amount];
            if (number == temp[amount])
            {
                counters += 1;
            }
        }
        cout << counters << endl;
        counters = 0; 
      }
    return 0;
      }