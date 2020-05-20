#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int32_t main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n & 1)
            cout << (n >> 1) << '\n';
        else
            cout << (n >> 1) - 1 << '\n';
    }
    return 0;
}