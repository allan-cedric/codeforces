#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int t, n, a, b;
    cin >> t;
    while (t--)
    {
        s = "";
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
            s += ('a' + (i % b));
        cout << s << endl;
    }
    return 0;
}