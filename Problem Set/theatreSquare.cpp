#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m, a, ans = 1;
    cin >> n >> m >> a;
    if ((n % a) == 0)
        ans *= n / a;
    else
        ans *= (n / a) + 1;
    if ((m % a) == 0)
        ans *= m / a;
    else
        ans *= (m / a) + 1;
    cout << ans;
    return 0;
}