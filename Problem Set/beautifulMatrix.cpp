#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    int oneI, oneJ;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                oneI = i;
                oneJ = j;
            }
        }
    cout << abs(oneI - 2) + abs(oneJ - 2);

    return 0;
}