#include <iostream>
using namespace std;
int main()
{
    string tekst;
    string szukany = "sto";
    cin >> tekst;
    int pozycja = tekst.find(szukany);
    if (pozycja != string::npos)
    {
        cout << "TAK" << endl;
    }
    else
    {
        cout << "NIE" << endl;
    }

    return 0;
}