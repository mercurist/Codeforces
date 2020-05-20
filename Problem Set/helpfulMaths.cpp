#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int> numbers;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
            continue;
        numbers.push_back(int(s[i]) - 48);
    }
    sort(numbers.begin(), numbers.end());
    vector<int>::iterator it;
    for (it = numbers.begin(); it != numbers.end(); it++)
    {
        if (it != numbers.begin())
            cout << '+';
        cout << *it;
    }
    return 0;
}