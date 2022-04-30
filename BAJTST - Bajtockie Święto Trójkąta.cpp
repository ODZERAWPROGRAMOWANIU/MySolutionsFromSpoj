
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double triangleArea(int a, int b, int c)
{
  if ((a < (b + c)) && (b < (a + c)) && (c < (a + b)))
  {
    double halfOfTheCircuit = double(a + b + c) / 2;
    double result = sqrt(double(halfOfTheCircuit * (halfOfTheCircuit - a) * (halfOfTheCircuit - b) * (halfOfTheCircuit - c)));
    return result;
  }
  else
  {
    return 0;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long amount, participants;
  double chalkUsage, sumOfCompleteUsage;
  cin >> amount;
  while (amount--)
  {
    cin >> participants >> chalkUsage;
    chalkUsage = chalkUsage / 10;
    for (int i = 0; i < participants; i++)
    {
      int a, b, c;
      cin >> a >> b >> c;

      sumOfCompleteUsage = sumOfCompleteUsage + chalkUsage * triangleArea(a, b, c);
    }
    cout << fixed << setprecision(0) << sumOfCompleteUsage << endl;
    sumOfCompleteUsage = 0;
    chalkUsage = 0;
  }
  return 0;
}
