#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vector<int> dracarys(d);
    vector<int> arghh({k, l, m, n});
    for (int p : arghh)
    {
        for (int i = p - 1; i < d; i += p)
        {
            if (dracarys[i] != -1)
                dracarys[i] = -1;
        }
    }

    int counter = 0;
    for (int i = 0; i < d; i++)
        counter += (dracarys[i] == -1);

    cout << counter;
    return 0;
}