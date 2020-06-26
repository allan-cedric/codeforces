#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string b;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> b;
        cout << b[0] << b[1];
        for(int i = 3; i < b.length(); i += 2)
            cout << b[i];
        cout << "\n";
    }
    return 0;
}