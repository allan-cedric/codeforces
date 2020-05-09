#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, c, r, dac, dbc;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> r;
        dac = abs(a - c);
        dbc = abs(b - c);
        if (dac <= r && dbc <= r)
            cout << 0 << endl;
        else if (dac >= r && dbc >= r)
            cout << abs(b - a) - (r << 1) * !((a >= c + r && b >= c + r) || (a <= c - r && b <= c - r)) << endl;
        else if (dac < r)
            cout << abs(b - a) - abs((a > b ? c - r : c + r) - a) << endl;
        else
            cout << abs(b - a) - abs((b > a ? c - r : c + r) - b) << endl;
    }
    return 0;
}
