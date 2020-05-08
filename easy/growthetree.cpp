#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cin >> n;
    vector<int> sticks(n);
    for (int i = 0; i < n; sum += sticks[i++])
        cin >> sticks[i];
    sort(sticks.begin(), sticks.end());

    long long min_values = 0;
    for (int i = 0; i < (n >> 1); i++)
        min_values += sticks[i];
    cout << min_values * min_values + (sum - min_values) * (sum - min_values) << endl;

    return 0;
}