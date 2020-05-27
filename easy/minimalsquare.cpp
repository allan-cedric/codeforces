#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,sse4")
#pragma once

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        cout << max(b, 2 * a) * max(b, 2 * a) << endl;
    }
    return 0;
}