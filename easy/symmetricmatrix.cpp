#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[4], t, n, m;
    bool symmetric;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        symmetric = false;
        while (n--)
        {
            for (int i = 0; i < 4; i++)
                cin >> arr[i];
            if (!(m % 2))
                symmetric |= (arr[1] == arr[2]);
        }
        cout << (symmetric ? "YES" : "NO") << "\n";
    }

    return 0;
}