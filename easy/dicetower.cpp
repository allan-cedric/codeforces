#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,sse4")

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    uint64_t x;

    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << ((x / 14) && (x % 14) && (x % 14) < 7 ? "YES" : "NO") << endl;
    }
    return 0;
}