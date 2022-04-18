#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        int temp[] = {a, b, c};
        sort(temp, temp + 3);
        if (temp[0] + temp[1] <= temp[2])
        {
            cout << "brak" << endl;
        }
        else
        {
            if (temp[0] * temp[0] + temp[1] * temp[1] == temp[2] * temp[2])
            {
                cout << "prostokatny" << endl;
            }
            else if (temp[0] * temp[0] + temp[1] * temp[1] > temp[2] * temp[2])
            {
                cout << "ostrokatny" << endl;
            }
            else
            {
                cout << "rozwartokatny" << endl;
            }
        }
    }
}