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
        if (n % 2)
        {
            cout << 7;
            n -= 3;
        }
        for (int i = 0; i < (n >> 1); i++)
            cout << 1;
        cout << endl;
    }
    return 0;
}