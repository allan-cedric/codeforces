#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> coins(n);
    int sum = 0;
    for (int i = 0; i < n; sum += coins[i++])
        cin >> coins[i];
    sort(coins.begin(), coins.end());
    int twin = sum, i = 0;
    while (twin > (sum - twin))
        twin -= coins[i++];
    cout << n - i + 1 << endl;

    return 0;
}