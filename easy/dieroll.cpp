#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int y, w, prob;
    cin >> y >> w;

    prob = 6 - max(y, w) + 1;

    cout << prob / gcd(6, prob) << "/" << 6 / gcd(6, prob) << "\n";

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return (gcd(b, a % b));
}