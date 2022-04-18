#include <iostream>
using namespace std;
int main()
{
    string text;
    int amountOfNumbers = 0, amountOfWords = 0;
    while (getline(cin, text))
    {
        if (isdigit(text[0]))
            amountOfNumbers++;
        else
            amountOfWords++;
        for (int i = 0; i < text.length(); i++)
        {
            if (isspace(text[i]))
            {
                if (isdigit(text[i + 1]))
                    amountOfNumbers++;
                else
                    amountOfWords++;
            }
        }

        cout << amountOfNumbers << " " << amountOfWords << endl;
        amountOfWords = 0;
        amountOfNumbers = 0;
    }
}