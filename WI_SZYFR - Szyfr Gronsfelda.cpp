#include <iostream>
#include <vector>
#include <string>
using namespace std;
string encrypt(string text, vector<int> key)
{
    string result = "";
    for (int i = 0; i < text.length(); i++)
    {
        char mark = text[i] + key[i];
        if (mark >= 90)
        {
            mark -= 26;
        }
        result += mark;
    }
    return result;
}
string decrypt(string text, vector<int> key)
{
    string result = "";
    for (int i = 0; i < text.length(); i++)
    {
        char mark = text[i] - key[i];
        if (mark < 65)
        {
            mark += 26;
        }
        result += mark;
    }
    return result;
}

int main()
{
    string choose, key, text;
    vector<int> k;
    cin >> choose >> key >> text;
    int x = key.length();
    if (choose == "SZYFRUJ")
    {
        for (int i = 0; i < text.length(); i++)
        {
            key += key[i];
        }
        for (int j = 0; j < key.length() - x; j++)
        {
            int temp = key[j] - 48;
            k.push_back(temp);
        }
        cout << encrypt(text, k) << endl;
    }
    if (choose == "DESZYFRUJ")
    {
        for (int i = 0; i < text.length(); i++)
        {
            key += key[i];
        }
        for (int j = 0; j < key.length() - x; j++)
        {
            int temp = key[j] - 48;
            k.push_back(temp);
        }
        cout << decrypt(text, k) << endl;
    }
}