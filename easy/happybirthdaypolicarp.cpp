#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, count;
    uint64_t n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n < 10)
            cout << n << endl;
        else
        {
            count = 0;
            for (uint64_t pten = 100, b = 11; n / b; b += pten, pten *= 10)
                count += (n / b > 9 ? 9 : n / b);
            cout << 9 + count << endl;
        }
    }
    return 0;
}