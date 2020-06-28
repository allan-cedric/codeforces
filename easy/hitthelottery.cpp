#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int bills[5] = {1, 5, 10, 20, 100};
    int n, numBills = 0;
    cin >> n;
    for (int i = 4; i >= 0; n %= bills[i], i--)
        numBills += n / bills[i];
    cout << numBills << "\n";
    return 0;
}