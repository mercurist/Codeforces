#include <bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int k, int l)
{
    if (l == 0)
        return k;
    return gcd(l, k % l);
}

int lcm(int k, int l)
{
    return (k * l) / gcd(k, l);
}

int32_t main()
{
    // inclusion-exclusion principle
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int ans = 0;
    ans += d / k;
    ans += d / l;
    ans += d / m;
    ans += d / n;

    ans -= d / lcm(k, l);
    ans -= d / lcm(l, m);
    ans -= d / lcm(m, n);

    return 0;
}