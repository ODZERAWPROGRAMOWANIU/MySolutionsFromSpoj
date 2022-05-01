#include <iostream>
using namespace std;
int dayOfTheWeek(int y, int m, int d)
{
  int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  if (m < 3)
    y -= 1;

  return ((y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7);
}

int main()
{
  ios_base::sync_with_stdio(0);
  int year, monthOfBegin = 1, dayOfBegin = 1, dayOfEnd = 31, monthOfEnd = 12, testCases;
  cin >> testCases;
  while (testCases--)
  {
    cin >> year;
    int temp = year;
    int result = dayOfTheWeek(year, monthOfBegin, dayOfBegin);
    int result1 = dayOfTheWeek(year, monthOfEnd, dayOfEnd);
    int newResult = 0, newResult1 = 0;
    while (true)
    {
      year++;
      newResult = dayOfTheWeek(year, monthOfBegin, dayOfBegin);
      newResult1 = dayOfTheWeek(year, monthOfEnd, dayOfEnd);
      if (newResult == result && newResult1 == result1)
      {
        break;
      }
    }
    cout << year - temp << endl;
    newResult = 0;
    newResult1 = 0;
  }
  return 0;
}