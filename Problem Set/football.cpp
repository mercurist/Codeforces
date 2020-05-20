#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int count = 1;
    char prevChar = x[0];
    bool flag = true;
    for (int i = 1; i < x.length(); i++)
    {
        while (x[i] == prevChar)
        {
            count++;
            i++;
            if (count >= 7)
            {
                flag = false;
            }
        }
        count = 1;
        prevChar = x[i];
    }
    if (flag)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}