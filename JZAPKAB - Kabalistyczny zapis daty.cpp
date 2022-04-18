#include <iostream>
using namespace std;
int main()
{
    string text;
    int sum = 0;
    cin >> text;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'a')
            sum += 1;
        if (text[i] == 'b')
            sum += 2;
        if (text[i] == 'c')
            sum += 3;
        if (text[i] == 'd')
            sum += 4;
        if (text[i] == 'e')
            sum += 5;
        if (text[i] == 'f')
            sum += 6;
        if (text[i] == 'g')
            sum += 7;
        if (text[i] == 'h')
            sum += 8;
        if (text[i] == 'i')
            sum += 9;
        if (text[i] == 'k')
            sum += 10;
        if (text[i] == 'l')
            sum += 20;
        if (text[i] == 'm')
            sum += 30;
        if (text[i] == 'n')
            sum += 40;
        if (text[i] == 'o')
            sum += 50;
        if (text[i] == 'p')
            sum += 60;
        if (text[i] == 'q')
            sum += 70;
        if (text[i] == 'r')
            sum += 80;
        if (text[i] == 's')
            sum += 90;
        if (text[i] == 't')
            sum += 100;
        if (text[i] == 'v')
            sum += 200;
        if (text[i] == 'x')
            sum += 300;
        if (text[i] == 'y')
            sum += 400;
        if (text[i] == 'z')
            sum += 500;
    }
    cout << sum << endl;
    return 0;
}