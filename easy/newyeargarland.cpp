#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, r, g, b, maximum;
    cin >> t;
    while (t--)
    {
        cin >> r >> g >> b;
        maximum = max(max(r, g), b);
        ((r + g + b) - maximum + 1 >= maximum) ? cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}