#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    int t, n, even;
    cin >> t;
    while (t--)
    {
        cin >> n;
        even = -2;
        arr.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (!(arr[i] % 2))
                even = i;
        }
        if (even != -2)
        {
            cout << 1 << endl;
            cout << ++even << endl;
        }
        else if (arr.size() > 1)
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}