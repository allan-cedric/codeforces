#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,sse4")

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int t, n, minimum;
    vector<int> strength;
    cin >> t;
    while (t--)
    {
        cin >> n;
        strength.resize(n);
        for (int i = 0; i < n; i++)
            cin >> strength[i];
        stable_sort(strength.begin(), strength.end());
        minimum = strength[1] - strength[0];
        for (int i = 2; minimum && i < n; i++)
            minimum = min(minimum, strength[i] - strength[i - 1]);
        cout << minimum << endl;
    }
    return 0;
}