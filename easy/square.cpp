#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a1, a2, b1, b2;
    cin >> t;
    while (t--)
    {
        cin >> a1 >> b1 >> a2 >> b2;
        cout << (max(a1, b1) == max(a2, b2) && min(a1, b1) + min(a2, b2) == max(a1, b1) ? "Yes" : "No") << endl;
    }
    return 0;
}