#include <iostream>
using namespace std;
int main()
{
    string D, J, M;
    int result = 0;
    cin >> D >> J >> M;
    for (int i = 0; i < D.length(); i++)
    {
        if (D[i] == J[i] == M[i])
        {
            continue;
        }
        if (D[i] != J[i] || D[i] != M[i])
        {
            if (J[i] == M[i])
            {
                result += 2;
            }
            else
            {
                result++;
            }
        }
    }
    cout << result << endl;
    return 0;
}