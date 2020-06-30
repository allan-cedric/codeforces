#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, unique_i, unique_j;
    cin >> n >> m;
    char matrix[n][m];

    for (auto cell : matrix)
        cin >> cell;

    for (int i = 0, count = 0; i < n && count != 1; i++)
    {
        count = 0;
        unique_i = i;
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == '*')
                count++;
        }
    }

    for (int j = 0, count = 0; j < m && count != 1; j++)
    {
        count = 0;
        unique_j = j;
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] == '*')
                count++;
        }
    }

    cout << unique_i + 1 << " " << unique_j + 1 << "\n";

    return 0;
}