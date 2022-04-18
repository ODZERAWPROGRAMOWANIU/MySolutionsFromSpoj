#include <iostream>
using namespace std;
int main() {
   int towns, profit;
   long int sum = 0, max = 0;
   cin >> towns;
   for (int i = 1; i <= towns; i++)
   {
      cin >> profit;
      sum += profit;
      if (sum > max)
      {
         max = sum;
      }
      if (sum < 0)
      {
         sum = 0;
      }
   }
   cout << max << endl;
  return 0;
  }
