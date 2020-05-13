#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, n, m;
    cin >> t;
    while (t--)
    {
        cin >> x >> n >> m;
        while (n-- && x > 20)
            x = ((x >> 1) + 10);
        while (m-- && x > 0)
            x -= 10;
        cout << (x <= 0 ? "YES" : "NO") << endl;
    }
    return 0;
}