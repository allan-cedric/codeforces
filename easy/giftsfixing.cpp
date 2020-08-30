#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    vector<int> a, b;
    int t, n, smallest_a, smallest_b;
    uint64_t minimumMoves;

    cin >> t;
    while (t--)
    {
        cin >> n;
        a.resize(n);
        b.resize(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        minimumMoves = 0;
        smallest_a = *min_element(a.begin(), a.end());
        smallest_b = *min_element(b.begin(), b.end());
        for (int i = 0; i < n; i++)
            minimumMoves += max(a[i] - smallest_a, b[i] - smallest_b);
        cout << minimumMoves << "\n";
    }

    return 0;
}