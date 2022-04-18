#include <iostream>
using namespace std;
int main()
{
    string tower1, tower2;
    cin >> tower1 >> tower2;
    if (tower1[0] == tower2[0])
    {
        cout << "TAK" << endl;
    }
    else if (tower1[1] == tower2[1])
    {
        cout << "TAK" << endl;
    }
    else
    {
        cout << "NIE" << endl;
    }
    return 0;
}