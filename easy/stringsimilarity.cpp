#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, w;
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        w = "";
        for (int i = 0; i < n; i++)
            w += s[i * 2];
        cout << w << "\n";
    }

    return 0;
}