#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a < b)
            cout << ((b - a) % 2 ? 1 : 2) << endl;
        else if (a > b)
            cout << (!((a - b) % 2) ? 1 : 2) << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}