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
        int n, a, b;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
        {
            cout << char(97 + (i % b));
        }
        cout << '\n';
    }
    return 0;
}