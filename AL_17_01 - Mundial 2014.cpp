#include <iostream>
using namespace std;
int main()
{
    string text = "Mundial ";
    char mark;
    mark = 'R' - ' ';
    text += mark;
    mark = 'P' - ' ';
    text += mark;
    mark = 'Q' - ' ';
    text += mark;
    mark = 'T' - ' ';
    text += mark;
    cout << text << endl;
}