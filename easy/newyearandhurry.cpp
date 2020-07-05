#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, q;
    cin >> n >> k;
    for(q = 1; q <= n && k + 5*q <= 240; q++)
        k += 5*q;
    cout << q - 1 << "\n";
    return 0;
}
