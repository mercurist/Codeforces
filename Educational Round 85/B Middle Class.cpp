#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define vpii vector<pii>
#define ff first
#define ss second
#define FIO                        \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)

#define vi vector<int>
#define int long long

int32_t main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, sum = 0;
        cin >> n >> x;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        int count = n;
        int index = 0;
        sort(a.begin(), a.end());
        while (count != 0 && (sum / count) < x)
        {
            sum -= a[index++];
            count--;
        }

        cout << count << '\n';
    }

    return 0;
}