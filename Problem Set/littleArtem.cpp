#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define constraint(i, j, n, m) ((i >= 0 && i < n) && (j >= 0 && j < m))

void printing(int **array, int n, int m)
{
    cout << '\n'
         << "printing the array now " << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (array[i][j] == 1)
                cout << 'B';
            else
                cout << 'W';
        }
        cout << '\n';
    }
}

bool hasNeighbour(int **array, int i, int j, int n, int m)
{
    int target = 1 - array[i][j];
    // check it's neighbours

    if (constraint(i + 1, j, n, m) && (array[i + 1][j] == target))
        return true;
    if (constraint(i - 1, j, n, m) && (array[i - 1][j] == target))
        return true;
    if (constraint(i, j + 1, n, m) && (array[i][j + 1] == target))
        return true;
    if (constraint(i, j - 1, n, m) && (array[i][j - 1] == target))
        return true;
    return false;
}

bool isGoodColoring(int **array, int n, int m)
{
    int b = 0, w = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (hasNeighbour(array, i, j, n, m))
            {
                if (array[i][j] == 1)
                    b++;
                else
                    w++;
            }
        }
    }
    return (b == (w + 1));
}
bool functionOrigin(int **array, int n, int m)
{

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (isGoodColoring(array, n, m))
                return true;
            if (!isGoodColoring(array, n, m))
            {
                array[i][j] = 0;
                printing(array, n, m);
                if (functionOrigin(array, n, m))
                    return true;
                array[i][j] = 1;
            }
        }
    return false;
}

int main()
{
    int t, n, m;
    int **array;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        delete array;
        array = new int *[n];
        for (int i = 0; i < n; i++)
            array[i] = new int[m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                array[i][j] = 1;

        cout << "here so";
        if (functionOrigin(array, n, m))
            printing(array, n, m);
    }
    return 0;
}