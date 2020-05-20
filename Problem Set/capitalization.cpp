#include <bits/stdc++.h>
using namespace std;

void capitolize(string &x)
{
    if (x[0] <= 122 && x[0] >= 97)
        x[0] -= 32;
}

int main()
{
    string x;
    cin >> x;
    capitolize(x);
    cout << x;
    return 0;
}