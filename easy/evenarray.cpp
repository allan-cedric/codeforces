#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, a, wrongPosition, even;
    cin >> t;
    while (t--)
    {
        cin >> n;
        wrongPosition = even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2 != i % 2)
                wrongPosition++;
            if (!(a % 2))
                even++;
        }
        if (even != (n + 1) / 2)
            cout << "-1\n";
        else
        {
            cout << wrongPosition / 2;
            cout << "\n";
        }
    }
    return 0;
}