#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solvingFunction(int a[9][9])
{
    int x = 9;
    int i = 0, j = 0;
    while (x--)
    {
        // cout << "at i = " << i << " and j = " << j << '\n';
        bool flag = false;
        int temp = a[i][j];
        a[i][j] = 10 - (a[i][j]);
        // if (a[i][j] == 9)
        //     a[i][j] = 1;
        // if (a[i][j] == 8)
        //     a[i][j] = 9;
        if (a[i][j] == 5)
            a[i][j] = 4;

        // cout << "changing value from " << temp << " to " << a[i][j] << '\n';
        if (x % 3 == 0)
            flag = true;
        i = (i + 3) % 9 + (flag == true);
        j = (j + 1) % 9;
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[9][9];
        for (int i = 0; i < 9; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 9; j++)
            {
                a[i][j] = s[j] - 48;
            }
        }
        // this doesnt take into account 3x3 division
        // char x = a[0][0];
        // for (int i = 0; i < 8; i++)
        //     a[i][i] = a[i + 1][i + 1];
        // a[8][8] = x;

        solvingFunction(a);

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
                cout << a[i][j];
            cout << '\n';
        }
    }
    return 0;
}