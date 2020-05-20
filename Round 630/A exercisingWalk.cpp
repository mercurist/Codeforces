#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll t, a, b, c, d, x, y, x1, x2, y1, y2;
ll netHorizontal, netVertical;

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        bool moveHorizontalAllowed = (x2 != x) || (x1 != x);
        bool moveVerticalAllowed = (y2 != y) || (y1 != y);

        if ((moveHorizontalAllowed == false) && ((a != 0) || (b != 0)))
        {
            cout << "NO" << '\n';
            continue;
        }

        if ((moveVerticalAllowed == false) && ((c != 0) || (d != 0)))
        {
            cout << "NO" << '\n';
            continue;
        }

        netHorizontal = b - a;
        netVertical = d - c;

        x += netHorizontal;
        y += netVertical;

        if ((x <= x2 && x >= x1) && (y <= y2 && y >= y1))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}