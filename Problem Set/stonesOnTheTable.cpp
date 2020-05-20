#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char *arr = new char[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0;
    char prevChar = arr[0];
    for (int i = 1; i < n; i++)
    {
        while (arr[i] == prevChar)
        {
            count++;
            i++;
        }
        prevChar = arr[i];
    }
    cout << count;
    return 0;
}