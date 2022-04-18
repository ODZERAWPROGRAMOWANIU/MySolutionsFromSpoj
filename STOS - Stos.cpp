#include <iostream>
using namespace std;
int main()
{
    char mark;
    int number;
    int tab[10];
    int counter = 0;
    while (cin >> mark)
    {
        switch (mark)
        {
        case '+':
            cin >> number;
            if (counter >= 10)
                cout << ":(" << endl;

            else
            {
                tab[counter++] = number;
                cout << ":)" << endl;
            }
            break;
        case '-':
            if (counter <= 0)
                cout << ":(" << endl;

            else
                cout << tab[--counter] << endl;

            break;
        }
    }
    return 0;
}