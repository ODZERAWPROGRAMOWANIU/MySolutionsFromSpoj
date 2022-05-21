#include <iostream>
#include <vector>
#include <numeric>
#include <math.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> allNumbers;
  int number, amountOfN, sumOfL = 0, testCases;
  cin >> testCases;
  while (testCases--)
  {
    cin >> amountOfN;
    while (amountOfN--)
    {
      cin >> number;
      allNumbers.push_back(number);
    }
    bool flag = true;
    int sum = accumulate(allNumbers.begin(), allNumbers.end(), 0);
    for (int i = 0; i < allNumbers.size() - 1; i++)
    {
      sumOfL += allNumbers[i];
      int diff = abs(2 * sumOfL - sum);
      if (diff == 0)
      {
        cout << i + 1 << "\n";
        flag = true;
        break;
      }
      else
      {
        flag = false;
      }
    }
    if (flag == 0)
    {
      cout << "0\n";
    }
    sumOfL = 0;
    allNumbers.clear();
  }
}