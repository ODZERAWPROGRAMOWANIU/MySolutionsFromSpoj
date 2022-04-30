#include <iostream>
#include <vector>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);

  vector<int> allAverageContamination;
  vector<int> sum;
  int amountOfDays, numberOfMeasurementPoints, number, result = 0, s = 0;
  double average = 0;
  string measurements;
  double thePermissibleLevelOfContamination;
  cin >> amountOfDays >> numberOfMeasurementPoints >> thePermissibleLevelOfContamination;
  while (amountOfDays--)
  {
    cin >> measurements;
    for (int i = 0; i < measurements.length(); i++)
    {
      int temp = measurements[i] - 48;
      average += temp;
    }
    average /= numberOfMeasurementPoints;
    if (average > thePermissibleLevelOfContamination)
    {
      allAverageContamination.push_back(1);
    }
    else
    {
      allAverageContamination.push_back(0);
    }

    average = 0;
  }
  int numberOfInquiries, a, b;
  sum.push_back(0);
  for (int i = 0; i < allAverageContamination.size(); i++)
  {
    s += allAverageContamination[i];
    sum.push_back(s);
  }
  cin >> numberOfInquiries;
  while (numberOfInquiries--)
  {
    cin >> a >> b;
    cout << sum[b] - sum[a - 1] << endl;
  }
}