#include <iostream>
using namespace std;
int main()
{
    string text;
    string mark;
    while (getline(cin, text))
    {
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == ' ')
            {
                cout << "/";
            }
            else
            {
                if (text[i] == 'A' || text[i] == 'a')
                {
                    mark += ".-";
                    cout << mark << "/";
                    mark = "";
                }
                if (text[i] == 'B' || text[i] == 'b')
                {
                    mark += "-...";
                    cout << mark << "/";
                    mark = "";
                }
                if (text[i] == 'C' || text[i] == 'c')
                {
                    mark += "-.-.";
                    cout << mark << "/";
                    mark = "";
                }
                if (text[i] == 'D' || text[i] == 'd')
                {
                    mark += "-..";
                    cout << mark << "/";
                    mark = "";
                }
                if (text[i] == 'E' || text[i] == 'e')
                {
                    mark += ".";
                    cout << mark << "/";
                    mark = "";
                }
                if (text[i] == 'F' || text[i] == 'f')
                {
                    mark += ".-..";
                    cout << mark << "/";
                    mark = "";
                }
                if (text[i] == 'G' || text[i] == 'g')
                {
                    mark += "--.";
                    cout << mark << "/";
                    mark = "";
                }
                if (text[i] == 'H' || text[i] == 'h')
                {
                    mark += "....";
                    cout << mark << "/";
                    mark = "";
                }
                if (text[i] == 'I' || text[i] == 'i')
                {
                    mark += "..";
                    cout << mark << "/";
                    mark = "";
                }
                if (text[i] == 'J' || text[i] == 'j')
                {
                    mark += ".---";
                    cout << mark << "/";
                    mark = "";
                }
                if (text[i] == 'K' || text[i] == 'k')
                {
                    mark += "-.-";
                    cout << mark << "/";
                    mark = "";
                }
                if (text[i] == 'L' || text[i] == 'l')
                {
                    mark += "..-.";
                    cout << mark << "/";
                    mark = "";
                }
                if (text[i] == 'M' || text[i] == 'm')
                {
                    mark += "--";
                    cout << mark << "/";
                    mark = "";
                }
            }
            if (text[i] == 'N' || text[i] == 'n')
            {
                mark += "-.";
                cout << mark << "/";
                mark = "";
            }
            if (text[i] == 'O' || text[i] == 'o')
            {
                mark += "---";
                cout << mark << "/";
                mark = "";
            }
            if (text[i] == 'P' || text[i] == 'p')
            {
                mark += ".--.";
                cout << mark << "/";
                mark = "";
            }
            if (text[i] == 'Q' || text[i] == 'q')
            {
                mark += "--.-";
                cout << mark << "/";
                mark = "";
            }
            if (text[i] == 'R' || text[i] == 'r')
            {
                mark += ".-.";
                cout << mark << "/";
                mark = "";
            }
            if (text[i] == 'S' || text[i] == 's')
            {
                mark += "...";
                cout << mark << "/";
                mark = "";
            }
            if (text[i] == 'T' || text[i] == 't')
            {

                mark += "-";
                cout << mark << "/";
                mark = "";
            }
            if (text[i] == 'U' || text[i] == 'u')
            {
                mark += "..-";
                cout << mark << "/";
                mark = "";
            }
            if (text[i] == 'V' || text[i] == 'v')
            {
                mark += "...-";
                cout << mark << "/";
                mark = "";
            }
            if (text[i] == 'W' || text[i] == 'w')
            {
                mark += ".--";
                cout << mark << "/";
                mark = "";
            }
            if (text[i] == 'X' || text[i] == 'x')
            {
                mark += "-..-";
                cout << mark << "/";
                mark = "";
            }
            if (text[i] == 'Y' || text[i] == 'y')
            {

                mark += "-,--";
                cout << mark << "/";
                mark = "";
            }
            if (text[i] == 'Z' || text[i] == 'z')
            {
                mark += "--..";
                cout << mark << "/";
                mark = "";
            }
        }
        cout << endl;
    }
    return 0;
}
