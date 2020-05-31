#pragma GCC optimize("O3")

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k, max_sum, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        max_sum = 0;
        int a[n], b[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            max_sum += a[j];
        }
        for (int j = 0; j < n; j++)
            cin >> b[j];
        stable_sort(a, a + n);
        stable_sort(b, b + n);
        for (i = 0; k-- && a[i] < b[n - 1 - i]; i++)
            max_sum += (-a[i] + b[n - 1 - i]);
        cout << max_sum << endl;
    }
    return 0;
}