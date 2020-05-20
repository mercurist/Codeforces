#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "little red red very red riding hood";
    stringstream sso(s);
    string word;
    map<string, int> FW;
    while (sso >> word)
        FW[word]++;

    map<string, int>::iterator it;
    for (it = FW.begin(); it != FW.end(); it++)
    {
        cout << it->first << " -> " << it->second << '\n';
    }

    return 0;
}