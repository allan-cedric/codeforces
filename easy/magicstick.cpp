#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,sse4")

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x >= y || x >= 4)
            cout << "YES" << endl;
        else if (x == 2 && y == 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}