#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float m16, k16, m36, k36, averageOfK, averageOfM, averageAll;
    int amountM16, amountK16, amountM36, amountK36;
    cin >> m16 >> k16 >> m36 >> k36;
    cin >> amountM16 >> amountK16 >> amountM36 >> amountK36;
    averageOfK = (k16 * amountK16 + k36 * amountK36) / (amountK16 + amountK36);
    averageOfM = (m16 * amountM16 + m36 * amountM36) / (amountM16 + amountM36);
    averageAll = (m16 * amountM16 + k16 * amountK16 + m36 * amountM36 + k36 * amountK36) /
                 (amountM16 + amountK16 + amountM36 + amountK36);
    cout << fixed << setprecision(2) << "K16K36: " << averageOfK << endl;
    cout << fixed << setprecision(2) << "M16M36: " << averageOfM << endl;
    cout << fixed << setprecision(2) << "M16K16M36K36: " << averageAll << endl;
}