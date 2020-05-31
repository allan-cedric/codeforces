#pragma GCC optimize("O3")

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define CARDS(n, k) (n / k)

int main()
{
    int t, n, m, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        if (m <= CARDS(n, k))
            cout << m << endl;
        else
            cout << CARDS(n, k) - ((m - CARDS(n, k)) % (k - 1) > 0) - (m - CARDS(n, k)) / (k - 1) << endl;
    }
    return 0;
}