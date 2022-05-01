#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  int testCases, result = 0;
  int ax, bx = 0, ay, by = 0, x, y;
  cin >> ax >> ay;
  cin >> testCases;
  while (testCases--)
  {
    cin >> x >> y;
    double M = bx * y + ax * by + x * ay - ax * y - bx * ay - x * by;
    if (M == 0)
    {
      if (x >= min(ax, bx) && x <= max(ax, bx) && y >= min(ay, by) && y <= max(ay, by))
      {
        result++;
      }
    }
  }

  cout << result << endl;

  return 0;
}