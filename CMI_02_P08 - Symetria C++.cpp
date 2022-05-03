#include <iostream>
using namespace std;
int main()
{
    int amount;
    string leftSide = "", rightSide = "", middleSide = "C", result = "";
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        leftSide += '+';
        rightSide += '+';
    }
    result += leftSide;
    result += middleSide;
    result += rightSide;
    cout << result << endl;
}