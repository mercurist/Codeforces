#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');
}

char toLowerCase(char c)
{
    // check if already lowercase
    if (c <= 122 && c >= 97)
        return c;
    else
        return c + 32;
}

int main()
{
    string x;
    cin >> x;
    string result;

    for (int i = 0; i < x.size(); i++)
    {
        if (isVowel(x[i]))
            continue;
        result.push_back('.');
        result.push_back(toLowerCase(x[i]));
    }
    cout << result;

    return 0;
}