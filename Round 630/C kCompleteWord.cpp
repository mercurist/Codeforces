#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                        \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)

int32_t main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < k / 2; i++)
        {
            int counter[26] = {};
            for (int st = 0; st + k - 1 < n; st += k)
            {
                int i1 = st + i;
                int i2 = st + k - 1 - i;

                counter[s[i1] - 'a']++;
                counter[s[i2] - 'a']++;
            }

            int req = 2 * (n / k);
            int mx = *max_element(counter, counter + 26);
            ans += req - mx;
        }

        if (k & 1)
        {
            int counters[26] = {};
            for (int i = k / 2; i < n; i += k)
            {
                counters[s[i] - 'a']++;
            }

            int req = (n / k);
            int mx = *max_element(counters, counters + 26);
            ans += req - mx;
        }

        cout << ans << '\n';
    }
    return 0;
}