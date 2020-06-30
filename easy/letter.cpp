#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, first_i = -1, first_j = -1, last_i = -1, last_j = -1;

    cin >> n >> m;
    char matrix[n][m];

    for (auto e : matrix)
        cin >> e;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == '*')
            {
                first_i = i;
                break;
            }
        }
        if (first_i >= 0)
            break;
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] == '*')
            {
                first_j = j;
                break;
            }
        }
        if (first_j >= 0)
            break;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (matrix[i][j] == '*')
            {
                last_i = i;
                break;
            }
        }
        if (last_i >= 0)
            break;
    }

    for (int j = m - 1; j >= 0; j--)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (matrix[i][j] == '*')
            {
                last_j = j;
                break;
            }
        }
        if (last_j >= 0)
            break;
    }

    for (int i = first_i; i <= last_i; i++)
    {
        for (int j = first_j; j <= last_j; j++)
            cout << matrix[i][j];
        cout << "\n";
    }
    return 0;
}