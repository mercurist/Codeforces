#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(NULL);
    ll t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        ll remainder = a % b;
        if (remainder == 0)
            cout << remainder << '\n';
        else
            cout << b - remainder << '\n';
    }
    return 0;
}