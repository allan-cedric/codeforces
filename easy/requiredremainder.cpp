#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, x, y, n1, n2;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n1;
        n2 = n1;
        n1 += (y - (n1 % x));
        cout << (n1 > n2 ? n1 - x : n1) << "\n";
    }
    return 0;
}