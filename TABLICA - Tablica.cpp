#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int temp;
    vector<int> number;
    while (cin >> temp)
    {
        number.push_back(temp);
    }
    for (int i = number.size() - 1; i >= 0; i--)
    {
        cout << number[i] << " ";
    }
}