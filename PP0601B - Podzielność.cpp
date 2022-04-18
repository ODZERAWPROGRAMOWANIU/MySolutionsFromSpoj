#include <iostream>
using namespace std;
int main() {
    int result;
    int amount;
    int a, b, c, i;
    cin >> amount;
   while (amount--)
    {
        cin >> a >> b >> c;
        for (int i = 1; i < a; i++)
        {
            if ((i % b == 0) && (i % c != 0))
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
  return 0;
  }
   