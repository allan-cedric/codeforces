#pragma GCC optimize("O3")
#pragma GCC target("sse4")

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    uint64_t n, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        k = n / 2;
        cout << 4 * (k * (k + 1) * (2 * k + 1)) / 3 << endl;
    }
    return 0;
}