#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int friends;
    int count, result = 0;
    while (n--)
    {
        friends = 3;
        count = 0;
        while (friends--)
        {
            cin >> a;
            if (a == 1)
                count++;
        }
        if (count >= 2)
            result++;
    }
    cout << result;
    return 0;
}
