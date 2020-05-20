#include <bits/stdc++.h>
using namespace std;

bool isUppercase(char c)
{
    return (c >= 65 && c <= 90);
}

void toLowercase(string &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (isUppercase(a[i]))
            a[i] = a[i] + 32;
    }
}

int main()
{
    string a, b;
    cin >> a >> b;
    toLowercase(a);
    toLowercase(b);

    if (a < b)
        cout << -1;
    else if (a > b)
        cout << 1;
    else
        cout << 0;

    return 0;
}