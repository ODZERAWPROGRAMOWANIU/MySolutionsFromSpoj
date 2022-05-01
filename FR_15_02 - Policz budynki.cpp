#include <iostream>
#include <set>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);

  set<int> allHouses;
  int testCases, number;
  string name;
  cin >> testCases;
  while (testCases--)
  {
    cin >> number >> name;
    allHouses.insert(number);
  }
  cout << allHouses.size() << endl;
  return 0;
}