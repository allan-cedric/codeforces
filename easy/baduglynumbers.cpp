#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        (n > 1) ? cout << '2' << string(n - 1, '3') << endl : cout << -1 << endl;
    }
    return 0;
}