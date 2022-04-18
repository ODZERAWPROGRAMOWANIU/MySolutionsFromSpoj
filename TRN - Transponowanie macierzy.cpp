#include <iostream>
using namespace std;
int main()
{
    int wysokosc, szerokosc;
    cin >> wysokosc >> szerokosc;
    int tablica[wysokosc][szerokosc];
    for (int i = 0; i < wysokosc; i++)
        for (int j = 0; j < szerokosc; j++)
            cin >> tablica[i][j];

    for (int i = 0; i < wysokosc - (wysokosc - szerokosc); i++)
    {
        for (int j = 0; j < szerokosc + (wysokosc - szerokosc); j++)
            cout << tablica[j][i] << " ";
        cout << endl;
    }
    return 0;
}