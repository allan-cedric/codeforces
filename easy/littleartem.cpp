#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int j = 0; j < m; j++)
            cout << 'B';
        cout << endl;
        for (int i = 1; i < n; i++)
        {
            cout << 'B';
            for (int j = 1; j < m; j++)
                cout << 'W';
            cout << endl;
        }
    }
    return 0;
}