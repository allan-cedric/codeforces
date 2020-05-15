#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        arr.resize(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        stable_sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
        cout << arr.size() << endl;
    }
    return 0;
}