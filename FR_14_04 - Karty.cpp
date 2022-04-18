#include <iostream>
using namespace std;
int checkText(string text)
{
    int points = 0;
    int temp = 0;
    for (int i = 0; i < text.length(); i++)
    {

        if (text[i] == '2')
            points = 2;
        if (text[i] == '3')
            points = 3;

        if (text[i] == '4')
            points = 4;

        if (text[i] == '5')
            points = 5;

        if (text[i] == '6')
            points = 6;

        if (text[i] == '7')
            points = 7;

        if (text[i] == '8')
            points = 8;

        if (text[i] == '9')
            points = 9;

        if (text[i] == 'T')
            points = 10;

        if (text[i] == 'J')
            points = 11;

        if (text[i] == 'Q')
            points = 12;

        if (text[i] == 'K')
            points = 13;

        if (text[i] == 'A')
            points = 14;
        temp += points;
        points = 0;
    }

    return temp;
}
int main()
{
    string text, text1;
    cin >> text >> text1;
    if (checkText(text) > checkText(text1))
    {
        cout << "JASIO" << endl;
    }
    else if (checkText(text) == checkText(text1))
    {
        cout << "REMIS" << endl;
    }
    else
    {
        cout << "STASIO" << endl;
    }
}