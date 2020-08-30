#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    vector<int> a;
    int t, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        if (a[a.size() - 1] - a[0] + 1 == a.size())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}