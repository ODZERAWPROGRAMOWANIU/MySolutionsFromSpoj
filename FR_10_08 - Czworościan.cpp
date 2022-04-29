#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  int amount, sideOfTetrahedron;
  cin >> amount;
  while (amount--)
  {
    cin >> sideOfTetrahedron;
    double v = 1.41421356237 * (sideOfTetrahedron * sideOfTetrahedron * sideOfTetrahedron) / 12;
    cout << fixed << setprecision(2) << v << endl;
  }
}