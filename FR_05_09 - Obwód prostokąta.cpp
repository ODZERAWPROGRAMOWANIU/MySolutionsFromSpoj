#include <iostream>
#include <math.h>
using namespace std;
void perimeter(int &n)
{
  int perimeter = 0;
  for (int i = sqrt(n); i >= 1; i--)
  {
    if (n % i == 0)
    {
      perimeter = 2 * (i + n / i);
      break;
    }
  }
  cout << perimeter << endl;
  perimeter = 0;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int testCases, n;
  cin >> testCases;
  while (testCases--)
  {
    cin >> n;
    perimeter(n);
  }
}