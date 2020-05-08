#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, c, maximum, minimum;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        maximum = max(max(a, b), c);
        minimum = min(min(a, b), c);
        cout << ((maximum - minimum - 2) << 1) * (maximum - minimum > 1) << endl;
    }
    return 0;
}