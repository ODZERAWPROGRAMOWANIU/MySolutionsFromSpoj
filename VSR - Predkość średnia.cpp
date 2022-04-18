#include <iostream>
using namespace std;
int main()
{
    int amount;
    int v1, v2, averageSpeed;
    cin >> amount;
    while (amount--)
    {
        cin >> v1 >> v2;
        averageSpeed = (2 * v1 * v2) / (v1 + v2);
        cout << averageSpeed << endl;
    }
    return 0;
}