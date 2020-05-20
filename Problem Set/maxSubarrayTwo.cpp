#include <bits/stdc++.h>
using namespace std;
#define mk(a, b, c) c *a = new c[b];

int main()
{
    int n;
    cin >> n;
    mk(arr, n, int);
    mk(prefix, n + 1, int);
    prefix[0] = 0;
    int maxSum = INT_MIN;
    int maxIndexI = -1;
    int maxIndexJ = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        prefix[i + 1] = prefix[i] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subSum = prefix[j + 1] - prefix[i];
            if (subSum > maxSum)
            {
                maxSum = subSum;
                maxIndexI = i;
                maxIndexJ = j;
            }
        }
    }

    cout << "max subarray ranges from " << maxIndexI << " to " << maxIndexJ << '\n';
    cout << "the sum is " << maxSum;

    return 0;
}