#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, a, b, x, y, area_line, area_column;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x >> y;
        area_line = max(x - 0, (a - 1) - x) * b;
        area_column = max(y - 0, (b - 1) - y) * a;
        cout << max(area_line, area_column);
        cout << "\n";
    }
    return 0;
}