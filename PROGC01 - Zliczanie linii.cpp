#include <iostream>
using namespace std;
int main()
{
    string text;
    long amountOfLines = 0;
    while (getline(cin, text))
    {
        amountOfLines++;
    }
    cout << amountOfLines << endl;

    return 0;
}