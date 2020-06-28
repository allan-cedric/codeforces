#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, remain;
    cin >> n >> m;
    remain = n % m;
    while (remain--)
        cout << (n / m) + 1 << " ";
    remain = n % m;
    while (m - remain)
    {
        cout << n / m << " ";
        remain++;
    }
    cout << "\n";
    return 0;
}