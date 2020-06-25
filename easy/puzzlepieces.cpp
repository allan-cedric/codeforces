#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (min(n, m) == 1 || max(n, m) == 2)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}