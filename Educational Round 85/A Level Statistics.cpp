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

int main()
{
    FIO;
    int x;
    cin >> x;
    while (x--)
    {
        bool ans = true;
        int n;
        cin >> n;
        vpii a(n);
        for (int i = 0; i < n; i++)
        {
            int p, c;
            cin >> p >> c;
            a[i] = make_pair(p, c);
        }

        int plays, clears;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                plays = a[0].ff;
                clears = a[0].ss;
                if (plays < clears)
                {
                    ans = false;
                    break;
                }
            }
            else
            {
                int currPlays = a[i].ff;
                int currClears = a[i].ss;
                if (currPlays < plays)
                {
                    ans = false;
                    break;
                }

                if (currClears < clears)
                {
                    ans = false;
                    break;
                }

                int differenceInPlays = currPlays - plays;
                int differenceInClears = currClears - clears;
                if (differenceInClears > differenceInPlays)
                {
                    ans = false;
                    break;
                }

                plays = currPlays;
                clears = currClears;
            }
        }

        if (ans)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}