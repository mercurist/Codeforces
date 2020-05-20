#include <bits/stdc++.h>
using namespace std;

char toChar(int x)
{
    return char(x + 48);
}

int main()
{
    int n;
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string a, b;

    cin >> n;
    while (n--)
    {
        cin >> a;
        b.clear();
        int len = a.length();
        if (len > 10)
        {
            b.push_back(a[0]);
            if (len == 11)
            {
                b.push_back('9');
                b.push_back(a[len - 1]);
                cout << b << '\n';
            }
            else
            {
                b.push_back(toChar((len - 2) / 10));
                b.push_back(toChar((len - 2) % 10));
                b.push_back(a[len - 1]);
                cout << b << '\n';
            }
        }
        else
        {
            cout << a << '\n';
        }
    }
    return 0;
}