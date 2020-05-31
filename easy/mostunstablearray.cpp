#pragma GCC optimize("O3")

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << (n == 1 ? 0 : m * ((n > 2) + 1)) << endl;
    }
    return 0;
}