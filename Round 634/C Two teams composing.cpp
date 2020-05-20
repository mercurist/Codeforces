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
        int n, a;
        cin >> n;
        unordered_map<int, int> hashr;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            hashr[a]++;
        }

        int maxOccurrences = INT_MIN;
        int numberWithMaxOccurence = -1;
        unordered_map<int, int>::iterator itr;
        for (itr = hashr.begin(); itr != hashr.end(); itr++)
        {
            if (itr->second > maxOccurrences)
            {
                maxOccurrences = itr->second;
                numberWithMaxOccurence = itr->first;
            }
        }

        int countUnique = 0;
        for (itr = hashr.begin(); itr != hashr.end(); itr++)
        {
            if (itr->first != numberWithMaxOccurence)
                countUnique += 1;
        }

        // dummy result
        // cout << min(countUnique, maxOccurrences) << '\n';
        if (countUnique > maxOccurrences)
        {
            cout << maxOccurrences << '\n';
        }
        else
        {
            if ((maxOccurrences - countUnique) > 1)
                cout << countUnique + 1 << '\n';
            else
            {
                cout << countUnique << '\n';
            }
        }
    }
    return 0;
}