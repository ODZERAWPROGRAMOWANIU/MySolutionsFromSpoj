#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    int rok, x, wynik, dlugosc, wynik1;
    string ulubionacyfra, a = " ";
    cin >> ulubionacyfra >> rok;
    dlugosc = ulubionacyfra.length();
    a = ulubionacyfra.substr(dlugosc - 1);
    x = stoi(a);
    wynik = ((((x * 2) + 5) * 50) + 1771);
    wynik -= rok;
    cout << wynik % 100 << endl;
    return 0;
}