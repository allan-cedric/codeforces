#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

bool solve();

char matrix[3][3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 9; i++)
        cin >> matrix[i];

    cout << (solve() ? "YES" : "NO") << "\n";

    return 0;
}

bool solve()
{
    for (int col = 0; col < 3; col++)
    {
        if (matrix[0][col] != matrix[2][2 - col])
            return false;
    }
    return (matrix[1][0] == matrix[1][2]);
}