#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <vector>
#define FASTIO                             \
    std::ios_base::sync_with_stdio(false); \
    cin.tie(0);                            \
    cout.tie(0);
using namespace std;

int main()
{
    FASTIO
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> complexities(n);
    for (int i = 0; i < n; i++)
        cin >> complexities[i];
    sort(complexities.begin(), complexities.end());
    cout << complexities[b] - complexities[b - 1] << "\n";
    return 0;
}