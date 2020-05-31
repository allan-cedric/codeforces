#pragma GCC optimize("O3")

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    uint64_t a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (a <= b)
            cout << b << endl;
        else if (c <= d)
            cout << -1 << endl;
        else
            cout << b + ((a - b) / (c - d) + ((a - b) % (c - d) > 0)) * c << endl;
    }
    return 0;
}