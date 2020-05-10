#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (k > n)
            cout << "NO" << endl;
        else if (!(n % k))
        {
            cout << "YES" << endl;
            while (k--)
                cout << n / k << " ";
            cout << endl;
        }
        else if (!((n % k) % 2))
        {
            cout << "YES" << endl;
            cout << k + (n % k) << " ";
            while (--k)
                cout << n / k << " ";
            cout << endl;
        }
    }

    return 0;
}