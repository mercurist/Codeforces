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

int minShots = INT_MAX;

void solvingFunction(vi a, vi b, vi triggered, int n, int currShots, int countZeros)
{
    int i = 0;
    while (countZeros != n)
    {
        bool alreadyZero = false;
        if (a[i] == 0)
        {
            alreadyZero = true;
            continue;
        }

        if (a[i] != 0)
        {
            a[i] -= 1;
            if (a[i] == 0)
            {
                countZeros++;
            }

            currShots++;
            if (currShots > minShots)
                return;
        }

        while (a[i] == 0 && countZeros != n)
        {
            if (triggered[i] == 1)
            {
                if (i < n)
                {
                    a[i + 1] -= b[i];
                    if (a[i + 1] <= 0)
                    {
                        countZeros++;
                        a[i + 1] = 0;
                    }
                }

                if (i == n - 1)
                {
                    a[0] -= b[i];
                    if (a[0] <= 0)
                    {
                        countZeros++;
                        a[0] = 0;
                    }
                }
                triggered[i] = 0;
            }
            i = (i + 1) % n;
        }

        if (countZeros == n)
        {
            minShots = min(minShots, currShots);
            return;
        }

        solvingFunction(a, b, triggered, n, currShots, countZeros);
        if (alreadyZero == false)
        {
            a[i] += 1;
        }
    }
}

int32_t main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        minShots = INT_MAX;
        int n;
        cin >> n;
        vi a(n), b(n), triggered(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            triggered[i] = 1;
        }

        solvingFunction(a, b, triggered, n, 0, 0);
        cout << minShots << '\n';
    }
    return 0;
}