#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> years(n);
    for (int i = 0; i < n; i++)
        cin >> years[i];
    cout << (*max_element(years.begin(), years.end()) + *min_element(years.begin(), years.end())) / 2 << "\n";

    return 0;
}