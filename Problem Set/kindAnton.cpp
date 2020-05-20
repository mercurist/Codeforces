#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

bool solvingFunction(vll a, vll b, int n)
{
    int leftPositive = -1, leftNegative = -1;
    for (int i = 0; i < n; i++)
    {
        if (leftPositive != -1 && leftNegative != -1)
            break;

        if (a[i] == 1 && leftPositive == -1)
            leftPositive = i;
        if (a[i] == -1 && leftNegative == -1)
            leftNegative = i;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            continue;
        if (a[i] < b[i])
        {
            if (leftPositive == -1)
                return false;
            if (leftPositive < i)
                continue;
            return false;
        }
        else
        {
            if (leftNegative == -1)
                return false;
            if (leftNegative < i)
                continue;
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    vll a, b;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.clear();
        b.clear();

        a.resize(n);
        b.resize(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        if (solvingFunction(a, b, n))
            cout << "YES" << '\n';
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}