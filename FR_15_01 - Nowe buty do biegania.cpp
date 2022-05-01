#include <iostream>
#include <algorithm>
using namespace std;
double milesToKm(double distance)
{
  double inMiles = distance / 1.609344;
  return inMiles;
}
int main()
{
  ios_base::sync_with_stdio(0);
  double distanceInKm;
  cin >> distanceInKm;
  double inMiles = milesToKm(distanceInKm);
  if (inMiles < 300)
  {
    cout << "NIE" << endl;
  }
  else if (inMiles >= 300 && inMiles < 500)
  {
    cout << "SPRAWDZIMY TWOJE OBECNE BUTY" << endl;
  }
  else if (inMiles >= 500)
  {
    cout << "TAK" << endl;
  }
  return 0;
}