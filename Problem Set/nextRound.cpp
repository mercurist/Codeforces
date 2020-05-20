#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int result = 0;
    int n, k;
    cin >> n >> k;
    k--;
    vi scores;
    scores.resize(n);
    for (int i = 0; i < n; i++)
        cin >> scores[i];
    // check if scores[k] is positive or not
    if (scores[k] > 0)
    {
        result = k + 1;
        while ((k < n - 1) && (scores[k + 1] == scores[k]))
        {
            k++;
            result++;
        }
        cout << result;
    }
    else
    {
        k--;
        while (k >= 0 && scores[k] <= 0)
            k--;
        result = k + 1;
        cout << result;
    }

    return 0;
}