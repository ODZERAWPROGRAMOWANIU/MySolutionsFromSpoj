#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void loadWord(string &word, vector<string> &song)
{
    char mark;
    do
    {
        cin >> word;
        mark = cin.get();
        song.push_back(word);
    } while (mark != '\n');
}
void findAndErase(vector<string> &oS, vector<string> &hV, vector<string>::iterator it)
{
    for (int i = 0; i < hV.size(); i++)
    {
        it = find(oS.begin(), oS.end(), hV[i]);
        oS.erase(it);
    }
    sort(oS.begin(), oS.end());
}
void printResult(vector<string> &oS)
{
    cout << oS.size() << "\n";
    for (int j = 0; j < oS.size(); j++)
    {
        cout << oS[j] << "\n";
    }
}
int main()
{
    vector<string> originalSong;
    vector<string> hisVersion;
    vector<string>::iterator it;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string word;
    loadWord(word, originalSong);
    loadWord(word, hisVersion);
    findAndErase(originalSong, hisVersion, it);
    printResult(originalSong);

    return 0;
}